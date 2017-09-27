/*
9. Escreva um programa em C que dadas n strings, determine quantas dessas strings contém uma string str.
*/
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf(" %d", &n);
    char strs[n][41], str[41];
    scanf(" %40[^\n]", str);
    int i, c = 0;
    for(i = 0; i < n; i++)
        scanf(" %40[^\n]", strs[i]);
    for(i = 0; i < n; i++)
        if(strstr(strs[i], str) != '\0')
            c++;
            
    printf("%s apareceu %d vezes.\n", str, c);
    
    return 0;
    
}
