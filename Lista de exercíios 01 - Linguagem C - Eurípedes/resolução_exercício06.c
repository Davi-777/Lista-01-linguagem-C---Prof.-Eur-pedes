#include<stdio.h>
int main()
{
float n1 = 0;
float n2 = 0;
float n3 = 0;
float m = 0;

printf("Digite as suas 3 notas :\n");
scanf("%f %f %f", &n1, &n2, &n3);
m = (n1 + n2 +n3)/3;

if (m>=5 && m<7) {
    printf("%.2f\n", m);
    printf("REGULAR\n");
    printf("Tarefa concluida\n");
} else {
    printf("%.2f\n", m);
    printf("Tarefa concluida\n");
    }
}