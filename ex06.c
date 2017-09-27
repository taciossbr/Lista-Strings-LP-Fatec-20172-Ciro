/*
6. Escreva um programa que receba uma string de 0s e 1s, interprete essa string como um número binário e informe o valor desse número na base decimal.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[151];
    scanf(" %150[^\n]", str);
    int i, j = 1, total = 0, len = strlen(str);
    for(i = len - 1; i >= 0; i--){
        total += (str[i] - '0') * j;
        j *= 2;
    }
    
    printf("%d\n", total);
    return 0;
    
}
