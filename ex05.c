/*
4. Escreva um programa que receba uma string do teclado e informe se ela é 5. Escreva um programa que receba uma string str, um inteiro p e um caractere ch, e insere o
caractere ch na posição p da string str. Se p for maior que o tamanho da string str, exiba uma
mensagem. Por exemplo, str = “programacao”, p = 3 e ch = 's', a string str passaria a ser
“prosgramacao”.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char str[152];
    scanf(" %150[^\n]", str);
    char ch;
    scanf(" %c", &ch);
    int p;
    scanf(" %d", &p);
    int len = strlen(str);
    if(p > len){
        printf("%d maior que o comprimento da String",
                p);
        return 0;
    }
    int i;
    for(i = len + 1; i > p; i--)
        str[i] = str[i - 1];
    str[p] = ch;
    
    printf("%s\n", str);
    
    return 0;
    
}
