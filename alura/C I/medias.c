#include <stdio.h>

int main()
{
    int quant, num, soma;
    double media;

    printf("informe a quantidade de numeros para se calcular a media: \n");
    scanf("%d", &quant);

    for (int i = 1; i <= quant; i++)
    {
        printf("informe o %d  numero: \n", i);
        scanf("%d", &num);
        soma = soma + num;  
    }

    media = soma / (double)quant;

    printf("A media e %d.\n", soma);

    return(0);
}