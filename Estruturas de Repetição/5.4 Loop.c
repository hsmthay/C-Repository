/******************************************************************************
Leia um número inteiro n e verifique se ele é ou não um número primo.
*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, contador;
    
    printf("Digite um numero:\n");
    scanf("%d",&n);
    
    for (int i = 1; i < n; i++) {
        if ( n % i == 0  )
    {
        contador = contador + 1;
    }
        
    } 
    if (contador > 1)
    printf("Não é primo \n");
    else printf("é primo\n");

    return 0;
}

