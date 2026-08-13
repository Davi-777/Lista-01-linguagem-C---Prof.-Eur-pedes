int main()
{
int i = 0;
printf("Escreva um numero\n");
scanf("%d", &i);
if (i % 2 == 0) {
printf("O numero %d e par", i);
} else {
printf("O numero %d e impar", i);
}
return 0;
}