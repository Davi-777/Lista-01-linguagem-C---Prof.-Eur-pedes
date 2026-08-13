int main()
{
float n1 = 0;
float n2 = 0;
float n3 = 0;
float s = 0;
float m = 0;
printf("Escreva as suas 3 notas:\n");
scanf("%f %f %f", &n1, &n2, &n3);
s = n1 + n2 + n3;
m = s/3;
if (m>=5) {
printf("Aprovado.\n");
} else {
printf("Reprovado\n");
}
}