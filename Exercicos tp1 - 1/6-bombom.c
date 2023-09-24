/******************************************************************************
 * 
Pedrinho quer comprar o maior número de bombons possível com o dinheiro que tem.
Faça um programa para calcular quantos bombons ele consegue comprar. Peça ao
usuário o dinheiro que ele tem e quantos bombons quer comprar.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int bombom = 2;
    int qtdBombom;
    float dinheiro,calculo;
    
    printf("Quanto dinheiro voce tem?\n");
    scanf("%f",&dinheiro);
    
   printf("Quantos bombons voce quer comprar?\n");
   scanf("%d",&qtdBombom);

   qtdBombom = dinheiro / bombom;
   
   printf("Será possivel comprar: %d bombons \n",qtdBombom);

    return 0;
}

