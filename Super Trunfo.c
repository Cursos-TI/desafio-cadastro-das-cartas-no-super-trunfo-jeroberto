#include<stdio.h>
int main(){

//Registro da primeira carta
char Estado01 = 'A';
char Codigo01[05];
char Cidade01[10];
int Populacao01;
float Area01;
float Pib01;
int Pontos_turisticos01;

//Imprimido o resultado na tela
printf("Digite uma letra representando um estado: \n");
scanf("%c", &Estado01);

printf("Digite o codigo: \n");
scanf("%s", Codigo01);

printf("Digite sua cidade: \n");
scanf("%s", Cidade01);

printf("Número de habitantes da cidade: \n");
scanf("%d", &Populacao01);

printf("Digite a area: \n");
scanf("%f", &Area01);

printf("A quantidade de pontos turísticos da cidade \n");
scanf("%d", &Pontos_turisticos01);

//Inserindo dados da primeira carta
printf("Sua letra foi: %c \n", Estado01);
printf("Seu codigo é: %s \n", Codigo01);
printf("Sua cidade é: \n", Cidade01);
printf("Número de habitantes é: %d \n", Populacao01);
printf("Sua área é de: %f \n", Area01);
printf("O pib é de: %f \n", Pib01);
printf("Pontos turísticos é de: %d \n", Pontos_turisticos01);

// Registro da segunda carta
char Estado02 = 'B';
char Codigo02[05];
char Cidade02[10];
int Populacao02;
float Area02;
float Pib02;
int Pontos_turisticos02;

printf("Digite uma letra representando um estado: \n");
scanf("%c", &Estado02);

printf("Digite o codigo: \n");
scanf("%s", Codigo02);

printf("Digite sua cidade: \n");
scanf("%d", &Populacao02);

printf("Número de habitantes da cidade: \n");
scanf("%d", &Populacao02);

printf("Digite a Área: \n");
scanf("%f", &Area02);

printf("Digite a Pib: \n");
scanf("%f", &Pib02);

printf("A quantidade de pontos turísticos na cidade: \n");
scanf("%d", &Pontos_turisticos02);

//inserindo dados da segunda carta
printf("Sua letra foi: %c \n", Estado02);
printf("Seu código é: \n", Codigo02);
printf("Sua cidade é: %s \n", Cidade02);
printf("Número de habitantes é: %d \n", Populacao02);
printf("Sua área é de: %f \n", Area02);
printf("O pib é de: %f \n", Pib02);
printf("Pontos turísticos é de: %d \n", Pontos_turisticos02);


return 0;
}
