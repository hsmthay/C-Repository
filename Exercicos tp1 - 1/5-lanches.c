/******************************************************************************
Faça um algoritmo que leia o lanche que você comeu no colégio, com as quantidades
de cada item, e te mostre o quanto você tem que pagar. Assuma que o lanche só pode
ter pão de queijo, coxinha, refrigerante e suco. Você pode inventar os preços dos
lanches.
*******************************************************************************/
#include <stdio.h>

int main()
{
  
  float paoDeQueijo = 3;
  float coxinha = 4;
  float refrigerante = 8;
  float suco = 5;
  float resultado1,resultado2,resultado3,resultado4,total;

  /*Pão de queijo 3 reais
    Coxinha 4 reais
    Refrigente 8 reais
    Suco 5 reais*/


  printf("Quantos pães de queijo comeu?\n");
  scanf("%f",&paoDeQueijo);

  printf("Quantas coxinhas comeu?\n");
  scanf("%f",&coxinha);

  printf("Quantos refigerantes bebeu?\n");
  scanf("%f",&refrigerante);

  printf("Quantos sucos bebeu?\n");
  scanf("%f",&suco);
  
  resultado1 = paoDeQueijo * 3;
  resultado2 = coxinha * 4;
  resultado3 = refrigerante * 8;
  resultado4 = suco * 5;
  total = resultado1 + resultado2 + resultado3 + resultado4;

  printf("Total a pagar: %f",total);

    return 0;

}

