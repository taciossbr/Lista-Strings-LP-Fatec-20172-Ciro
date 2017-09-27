/*
10. Escreva um programa que dada um inteiro n e um caractere ch, solicite que o usuário informe n palavras que começam com a letra ch. Se o usuário informar alguma palavra que não comece com a letra ch, o programa deve exibir uma mensagem informando que a palavra não começa com a letra ch. No final o programa deve exibir as n palavras digitadas pelo usuário que começam com a letra ch.
*/
#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf(" %d", &n);
    char strs[n][41], ch;
    scanf(" %c", &ch);
    int i;
    
    for(i = 0; i < n; i++){
        scanf(" %40[^\n]", strs[i]);
        if(strs[i][0] != ch){
            puts("O primeiro caractere esta errado");
            return 0;
        }
    }
    
    for(i = 0; i < n; i++)
        puts(strs[i]);
    
    return 0;
    
}
