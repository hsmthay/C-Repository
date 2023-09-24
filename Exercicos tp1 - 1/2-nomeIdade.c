#include <stdio.h>

int main(void) {
//Faça um algoritmo que pergunte o nome de uma pessoa e retorne uma mensagem do tipo “Oi Fulano!”, onde “Fulano” é o nome da pessoa.

  int idade;
  char nome[50];
  
  printf("Digite seu nome:\n");
  scanf("%s",nome);
  
  printf("Agora digite sua idade:\n");
  scanf("%d",&idade);

  printf("Oi %s, voce tem %d anos",nome,idade);

  return 0;
}


