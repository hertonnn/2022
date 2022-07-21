# 2022
teste - 2022

#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char nome[60];
    float salario, aluguel, alimentacao, lazer, outros, taxaalimentacao, taxaalazer, taxaoutros, taxaaluguel;

    printf("Qual o seu nome?\n");
    scanf("%s", &nome);
    printf("\nOla %s, esse eh o seu transformador percentual\n", nome);
    printf("\nPara iniciarmos digite o seu salario mensal\n");
    scanf("%f", &salario);
    printf("\nestamos quase la...\n %s, agora preciso que vc digite seus gastos mensais \n com aluguel,alimentacao,lazer e outros\n", nome);
    scanf("%f%f%f%f", &aluguel, &alimentacao, &lazer, &outros);

    if (aluguel + alimentacao + lazer + outros <= salario)
    {
        taxaaluguel = aluguel / salario * 100;
        taxaalimentacao = alimentacao / salario * 100;
        taxaalazer = lazer / salario * 100;
        taxaoutros = outros / salario * 100;

        printf("\nVerifiquei que: \n");
        printf("\n %.1f%% gasto em aluguel\n", taxaaluguel);
        printf("\n %.1f%% gasto em alimentacao\n", taxaalimentacao);
        printf("\n %.1f%% gasto em seu lazer\n", taxaalazer);
        printf("\n %.1f%% gasto em outros\n", taxaoutros);
    }
    else
    {
        printf("opa, parece que seus gastos excedem sua renda...");
    }
}
