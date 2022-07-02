#include <stdio.h>

int main ()
{
    int soma = 0;

    for(int i = 1; i <= 100; i++)
    {
        soma = soma + i;
    }

    printf("a soma e %d.", soma);

    return(0);
}