/* programa para cálculo de média*/

#include <stdio.h>

#include <math.h>

int main()
{
    float x, y, media;

    printf("\nDigite um numero: ");
    scanf("%f", &x);
    printf("\nDigite um outro numero: ");
    scanf("%f", &y);

    media = (x + y) / 2;

    printf("\nA media e: %.2f", media);

    return(0);
}