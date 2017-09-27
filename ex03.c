/*
3. Escreva um programa que receba uma linha de texto, conte as vogais e apresente o
histograma da frequência de cada uma delas. Considere que a linha de texto não contém
acentuação. Por exemplo:
Linha de texto: “Os ultimos Jogos Olimpicos foram no Brasil”
Histograma:
a: ** (2)
e: (0)
i: **** (4)
o: ******** (8)
u: * (1)
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void print_v(char c, int n){
    int i;
    printf("%c: ", c);
    for(i = 0; i < n; i++)
        putchar('*');
    printf(" (%d)\n", n);
}

int main(){
    char str[151];
    scanf(" %150[^\n]", str);
    int i, len = strlen(str), a = 0, e = 0, is = 0, o = 0, u = 0;
    for(i = 0; i < len; i++)
        str[i] = tolower(str[i]);
    for(i = 0; i < len; i++)
        switch(str[i]){
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                is++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
            
    print_v('a', a);
    print_v('e', e);
    print_v('i', is);
    print_v('o', o);
    print_v('u', u);
    
    
    return 0;
}
