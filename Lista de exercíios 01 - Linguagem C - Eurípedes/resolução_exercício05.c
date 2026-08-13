int main()
{
float g = 0;
float p = 0;
printf("Escreva a quantidade de gramas de ouro:\n");
scanf("%f", &g);
p = g * 519.86;
if(p>2500) {
printf("preco:R$ %.2f valor consideravel", p);
} else {
printf("preco:R$ %.2f", p);
}
}