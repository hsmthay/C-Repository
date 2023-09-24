#include <stdio.h>

int main(void) {
//A  locadora de carros precisa da sua ajuda para cobrar seus serviços. Escreva um programa que pergunte a quantidade de Km percorridos por um carro alugado e a quantidade de dias pelos quais ele foi alugado. Calcule o preço total a pagar, sabendo que o carro custa R$90 por dia e R$0,20 por Km rodado.

  float km,resultado;
  int dias,calculoD;
  float calculoK;
  
  
  printf("Digite a quantidade de dias pela qual alugou o carro:\n");
  scanf("%d",&dias);

  printf("Digite a quantidade de KM que percorreu com o carro: \n");
  scanf("%f",&km);

    calculoD = dias * 90;
    calculoK = km * 0,20;
    resultado = calculoD + calculoK;
  
  printf("O Preço total a pagar eh de %f: ", resultado);

  return 0;
}

