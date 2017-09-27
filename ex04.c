/*
4. Escreva um programa que receba uma string do teclado e informe se ela é palíndromo ou
não. Uma string é palíndromo quando pode ser lida tanto de trás para frente quanto de frente
para trás e possui exatamente a mesma sequência de caracteres. Por exemplo: “ASA”,
“SUBI NO ONIBUS”. Desconsidere os espaços.
*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main(){
    char s[151];
    scanf(" %150[^\n]", s);
    int len = strlen(s);
    int i, j = len - 1;
    for(i = 0; i < len; i++)
        s[i] = tolower(s[i]);
    for(i = 0; i < j; i++, j--){
        while(s[i] == ' ') i++;
        while(s[j] == ' ') j--;
        if(s[i] != s[j]){
            printf("não é um palindromo\n");
            return 0;
        }
    }
    printf("é um palindromo\n");
    return 0;
}
