/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,m,k,soma,contador;
    float media;
    
    printf("Valor de N:\n");
    scanf("%d",&n);
    
    printf("Valor de M:\n");
    scanf("%d",&m);
    
    printf("Valor de K:\n");
    scanf("%d",&k);
    
    soma=0;
    
    for (int i = n; i< m; i++)
    { 
        if (i% k==0)
        {
            printf("%d\n",i);
            soma = soma +i;
            contador = contador + 1;
        }
    }
    
    media = soma/(float)contador ;
    
    printf ("soma %d\n",soma);
    printf ("Média %f\n",media);
    
    return 0;
}

