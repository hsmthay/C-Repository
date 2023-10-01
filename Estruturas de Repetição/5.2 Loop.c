/******************************************************************************
5.2) Leia um valor inteiro n e, logo após, solicite a leitura de
n números inteiros. Ao final, informe qual o foi o maior e o
menor número lido.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,m,o;
    int maior=-1000000000;
    int menor=1000000;
    
    printf("Valor de N:\n");
    scanf("%d",&n);
    
     for (int i = 0; i < n; i++)
    
     {
         
     printf("Digite um numero:\n");
     scanf("%d",&m);
     
     if (m > maior )
     maior = m;
     
     if (m < menor )
     menor = m;
     
     }
 
printf("O maior numero é o: %d \n",maior);
printf("O menor numero é o: %d \n",menor);


    return 0;
}

