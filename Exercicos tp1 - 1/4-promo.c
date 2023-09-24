#include <stdio.h>

int main(void) {
//Crie um programa que leia o preço de um produto, calcule e mostre o seu PREÇO PROMOCIONAL, com 5% de desconto.


  float valorProduto;
  float valorDesconto;
  float calculo;
  
  printf(" Digite o valor do Produto: \n");
  scanf("%f",&valorProduto);

  valorDesconto = 5 / valorProduto;
  
  calculo = valorProduto - valorDesconto;
  
  printf("O valor do Produto com o desconto eh de: %f ", calculo);

  return 0;
}


