/*
7. Escreva um programa para ler 6 nomes em um vetor de strings A. Depois formar um vetor de strings B de tal forma que os elementos (nomes) estejam em ordem inversa a do vetor A.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char a[6][41], b[6][41];
    int i;
    
    for(i = 0; i < 6; i++)
        scanf(" %40[^\n]", a[i]);
    int j = 0;
    for( i = 5; i > - 1; i--)
        strcpy(b[j++], a[i]);
    for(i = 0; i < 6; i++)
        puts(b[i]);
    return 0;
    
}
