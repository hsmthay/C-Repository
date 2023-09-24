#include <stdio.h>

int main(void) {
//Faça um algoritmo que pergunte o nome de uma pessoa e retorne uma mensagem do tipo “Oi Fulano!”, onde “Fulano” é o nome da pessoa.

  char nome[50];
  
  printf("Digite seu nome:\n");
  scanf("%s",nome);

  printf("Oi %s",nome);

  return 0;
}


