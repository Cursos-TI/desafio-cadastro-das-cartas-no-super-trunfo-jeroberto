#include <stdio.h>

int main(){
   
    //registro da primeira carta
    char Estado01 = 'A';
    char codigo01[10];
    char Cidade01[20];
    int Populacao01;
    float Area01;
    float Pib01;
    int Pontos_turisticos01;

    // imprimido o Resultado na tela
    printf("Digite uma letra representando um estado: \n");
    scanf("%c", &Estado01);

    printf("Digite o Codigo: \n");
    scanf("%s", codigo01);


    printf("Digite sua Cidade: \n");
    scanf("%s", Cidade01);

    fflush(stdin);
    printf("numero de Habitantes da Cidade: \n");
    scanf("%d", &Populacao01);

    printf("Digite a Area: \n");
    scanf("%.2f",&Area01);

    printf("Digite o Pib: \n");
    scanf("%.2f", &Pib01);
     
    printf("A quantidade de pontos turísticos na Cidade: \n");
    scanf("%d", &Pontos_turisticos01);

    //inserindo dados da primeira carta
    printf("Sua letra foi: %c \n", Estado01);
    printf("Seu codigo é: %s \n", codigo01);
    printf("Sua cidade é: %s \n", Cidade01);
    printf("Número de habitantes é: %d \n", Populacao01);
    printf("Sua area é de: %.2f \n", Area01);
    printf("O pib é de: %.2f \n", Pib01);
    printf("Pontos turisticos é de: %d \n", Pontos_turisticos01);

    //Registro da segunda carta
    char Estado02 = 'B';
    char codigo02[10];
    char Cidade02[20];
    int Populacao02;
    float Area02;
    float Pib02;
    int pontos_turisticos02;

    printf("Digite uma letra representando um estado: \n");
    scanf("%c", &Estado02);

    printf("Digite o Codigo: \n");
    scanf("%s",codigo02);


    printf("Digite sua cidade: \n");
    scanf("%s", &Cidade02);

    printf("número de Habitantes da Cidade: \n");
    scanf("%d", &Populacao02);

    printf("Digite a Area: \n");
    scanf("%f", &Area02);

    printf("Digite o Pib: \n");
    scanf("%f", &Pib02);

    printf("A quantidade de pontos turísticos na Cidade: \n");
    scanf("%d", &pontos_turisticos02);

     //insetindo dados da segunda carta
     printf("Sua letra foi: %c \n",Estado02);
     printf("Seu codigo é: %s \n", codigo02);
     printf("Sua cidade é: %s \n", Cidade02);
     printf("Número de habitantes é: %d \n", Populacao02);
     printf("Sua area é de: %.2f \n", Area02);
     printf("O pib é de: %.2f \n", Pib02);
     printf("Pontos turisticos é de: %d \n", pontos_turisticos02);
 



    return 0;
}

