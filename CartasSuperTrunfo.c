#include <stdio.h>

int main (){
    char estado01[25], estado02[25];
    char codigo01[10], codigo02[10];
    char cidade01[50], cidade02[50];
    int populacao01, populacao02, pontoturistico01, pontoturistico02;
    float area01, area02, pib01, pib02;

//Carta 01
    printf("Carta 01\n Digite o nome do Estado: ");
    scanf("%s", estado01);
    printf("Digite agora o código da carta: ");
    scanf("%s", codigo01);
    printf("Nome da cidade: ");
    scanf("%s", cidade01);
    printf("Qual o número da populção: ");
    scanf("%d", &populacao01);
    printf("Área em km²: ");
    scanf("%f", &area01);
    printf("Digite o pib: ");
    scanf("%f", &pib01);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico01);
//carta 02
    

    printf("Carta 02\n Digite o nome do Estado: ");
    scanf("%s", estado02);
    printf("Digite agora o código da carta: ");
    scanf("%s", codigo02);
    printf("Nome da cidade: ");
    scanf("%s", cidade02);
    printf("Qual o número da populção: ");
    scanf("%d", &populacao02);
    printf("Área em km²: ");
    scanf("%f", &area02);
    printf("Digite o pib: ");
    scanf("%f", &pib02);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico02);

    printf("Informações da carta 01!!!\n");
    printf("Carta 01\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado01, codigo01, cidade01);
    printf("População: %d\n Área: %f\n Pib: %f\n Pontos Turísticos: %d", populacao01,area01, pib01, pontoturistico01);

    printf("Informações da carta 02!!!\n");
    printf("Carta 02\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado02, codigo02, cidade02);
    printf("População: %d\n Área: %f\n Pib: %f\n Pontos Turísticos: %d", populacao02,area02, pib02, pontoturistico02);

}