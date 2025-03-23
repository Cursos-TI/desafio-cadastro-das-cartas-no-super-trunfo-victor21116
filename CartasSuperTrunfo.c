#include <stdio.h>

int main (){
    char estado01[50], estado02[50];
    char codigo01[10], codigo02[10];
    char cidade01[50], cidade02[50];
    int populacao01, populacao02, pontoturistico01, pontoturistico02;
    float area01, area02, pib01, pib02;
    float densidade1, densidade2, pibpercapita1, pibpercapita2;


//Carta 01
    printf("Carta 01\n Digite o nome do Estado: ");
    fgets(estado01, 50, stdin);
    printf("Digite agora o código da carta: ");
    scanf(" %9s", codigo01);
    //Coloquei a função getchar pra limpar o buffer 
    getchar();
    printf("Nome da cidade: ");
    fgets(cidade01, 50, stdin);
    printf("Qual o número da população: ");
    scanf("%d", &populacao01);
    printf("Área em km²: ");
    scanf("%f", &area01);
    printf("Digite o pib: ");
    scanf("%f", &pib01);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico01);
    //adicionei as variáveis novas, coloquei o float pra fazer a conversao
    densidade1 = (float) populacao01 / area01;
    pibpercapita1 = pib01 / populacao01;
//carta 02
    
    getchar();
    printf("Carta 02\n Digite o nome do Estado: ");
    fgets(estado02, 50, stdin);
    printf("Digite agora o código da carta: ");
    scanf(" %9s", codigo02);
    getchar();
    printf("Nome da cidade: ");
    fgets(cidade02, 50, stdin);
    printf("Qual o número da população: ");
    scanf("%d", &populacao02);
    printf("Área em km²: ");
    scanf("%f", &area02);
    printf("Digite o pib: ");
    scanf("%f", &pib02);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontoturistico02);
    densidade2 = (float)populacao02 / area02;
    pibpercapita2 =  pib02 / populacao02;

    printf("Informações da carta 01!!!\n");
    printf("Carta 01\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado01, codigo01, cidade01);
    printf("População: %d\n Área: %.2fkm²\n Pib: %f\n Pontos Turísticos: %d\n", populacao01,area01, pib01, pontoturistico01);
    printf("A densidade populacional é de %.2f\n", densidade1);

    printf("Informações da carta 02!!!\n");
    printf("Carta 02\n Estado: %s\n Código: %s\n Nome da cidade: %s\n", estado02, codigo02, cidade02);
    printf("População: %d\n Área: %.2fkm²\n Pib: %f\n Pontos Turísticos: %d\n", populacao02, area02, pib02, pontoturistico02);
    printf("A densidade populacional é de %.2f\n", densidade2);

    return 0;

}