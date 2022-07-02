/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vertorum[10];
    int i, j, troca;
    
    for(i = 0; i <10; i++)
    {
        printf("Digite um número:\n");
        scanf("%d", &vertorum[i]);
    }
    
    printf("\nvetor nao ordenado.\n\n");
    
    for(i = 0; i <10; i++)
    {
        printf("O numero na posição %d e %d.\n", i, vertorum[i]);
    }
    
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j <10; j++)
        {
            if (vertorum[i] > vertorum[j])
            {
                troca = vertorum[i];
                vertorum[i] = vertorum[j];
                vertorum[j] = troca;
            }
        }
    }
    
    printf("\nvetor ordenado.\n\n");
    
    for(i = 0; i <10; i++)
    {
        printf("O numero na posição %d e %d.\n", i, vertorum[i]);
    }
    
    return (0);
}