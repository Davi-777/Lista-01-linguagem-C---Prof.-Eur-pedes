#include <stdio.h>

int main()
{
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float m = 0;
    
    printf("Escreva as suas 3 notas\n");
    scanf ("%f %f %f", &n1, &n2, &n3 );
    
    m = (n1 + n2 + n3)/ 3;
    printf("\n");
    if ( m < 5 ) {
        printf ("%.2f\n", m);
        printf ("INS");
    }
    if ( m >= 5 && m < 7 ) {
        printf ("%.2f\n", m);
        printf ("REG");
    }
    if ( m  >= 7 && m  < 9) {
        printf ("%.2f\n", m);
        printf ("BOM");
    }
    if (  m > 9 ) {
        printf ("%.2f\n", m);
        printf ("EXC");
    }
}