#include <stdio.h>

int main()
{
    char c1,c2,c3,c4,c5,c6;
    int contador = 0;
    
    printf("Escreva 6 letras:\n");
    scanf("%c", &c1);
    getchar();
    scanf("%c", &c2);
    getchar();
    scanf("%c", &c3);
    getchar();
    scanf("%c", &c4);
    getchar();
    scanf("%c", &c5);
    getchar();
    scanf("%c", &c6);
    getchar();
    
    if (c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u') {
        contador++;
    }
    if (c2 == 'a' || c2 == 'e' || c2 == 'i' || c2 == 'o' || c2 == 'u') {
        contador++;
    }
    if (c3 == 'a' || c3 == 'e' || c3 == 'i' || c3 == 'o' || c3 == 'u') {
        contador++;
    }
    if (c4 == 'a' || c4 == 'e' || c4 == 'i' || c4 == 'o' || c4 == 'u') {
        contador++;
    }
    if (c5 == 'a' || c5 == 'e' || c5 == 'i' || c5 == 'o' || c5 == 'u') {
        contador++;
    }
    if (c6 == 'a' || c6 == 'e' || c6 == 'i' || c6 == 'o' || c6 == 'u') {
        contador++;
    }
    
    printf("\n");
    printf("%d", contador);
}