/*
8. Escreva um programa para ler 4 nomes em cada um dos vetores de strings A e B. Construir um vetor de strings C, que será formada por um elemento do vetor A e por um elemento do vetor B, intercaladamente.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char a[4][41], b[4][41], c[8][41];
    int i, j;
    
    for(i = 0; i < 4; i++)
        scanf(" %40[^\n]", a[i]);
    for(i = 0; i < 4; i++)
        scanf(" %40[^\n]", b[i]);
    for(i = 0, j = 0; i < 8; i += 2, j++)
        strcpy(c[i], a[j]);
    for(i = 1, j = 0; i < 8; i += 2, j++)
        strcpy(c[i], b[j]);
    for(i = 0; i < 8; i++)
        puts(c[i]);
    return 0;
    
}
