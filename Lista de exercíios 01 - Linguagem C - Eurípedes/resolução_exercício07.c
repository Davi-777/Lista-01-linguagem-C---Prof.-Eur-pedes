#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    
    printf("Escreva 3 inteiros positivos:\n");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a * a + b * b == c * c ) {
        printf ("Pitagorico a^2 + b^2 = c^2\n");
    }
    if ( a * a + c * c == b * b) {
        printf("Pitagorico a^2 + c^2 = b^2\n");
    }
    if ( b * b + c * c == a * a) {
        printf("Pitagorico b^2 + c^2 = a^2\n");
    } 
    if (a * a + b * b != c * c && a * a + c * c != b * b && b * b + c * c != a * a) {
        printf("Nao pitagorico\n");
    }
}