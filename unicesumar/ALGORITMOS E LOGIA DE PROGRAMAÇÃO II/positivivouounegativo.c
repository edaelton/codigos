#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    int positivo = num > 0;
    int negativo = num < 0;

    if(positivo)
    {
        printf("O numero %d e um numero positivo.", num);
    }
    else if(negativo)
    {
        printf("O numero %d e um numero negativo.", num);
    }
    else
    {
        printf("O numero 0 (zero) e um numero neutro.");
    }

    return(0);
}