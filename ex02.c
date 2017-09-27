/*
2. Escreva um programa que receba uma string do teclado e informe quantas letras maiúsculas
ela possui.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char s[41];
    scanf(" %40[^\n]", s);
    int i, len = strlen(s), c = 0;
    for(i = 0; i < len; i++)
        if(isupper(s[i]))
            c++;
    printf("%d letras maiúsculas\n", c);
    
    return 0;
}
