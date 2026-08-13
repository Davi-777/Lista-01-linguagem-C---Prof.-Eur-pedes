#include <stdio.h>

int main()
{
    int L = 0;
    int M = 0;
    int N = 0;
    int aux = 0;
    
    printf ("Digite 3 inteiros\n");
    scanf ("%d %d %d", &L, &M, &N);
    
    if (L>M || L>N ) {
       if (M<N) {
           aux = L;
           L = M;
           M = aux;
       } else {
           aux = L;
           L = N;
           N = aux;
       }
    }
    if (M>N) {
        aux = M;
        M = N;
        N = aux;
    } 
    printf("%d %d %d", L, M, N);
}