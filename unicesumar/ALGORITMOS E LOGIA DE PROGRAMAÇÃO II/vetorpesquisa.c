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
    int i, acha, busca;
    
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
    
    printf("\nDigite o valor que dejesa encontrar:\n");
    scanf("%d", &busca);
    i = 0;
    acha = 0;
    while   ((acha == 0) && (i < 10))
    {
        if (vertorum[i] == busca)
        {
            acha = 1;
        }
        else
        {
            i++;
        }
    }
    if (acha = 1)
    {
        printf("O numero %d foi encontrado na posição %d.\n", busca, i);
    }
    else
    {
        printf("O elemento não foi encontrado.");
    }
    
    return (0);
}