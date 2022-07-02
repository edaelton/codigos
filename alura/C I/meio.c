#include <stdio.h>

int main()
{
    int x, y, total;

    printf("\nDigite um numero: ");
    scanf("%d", &x);
    printf("\nDigite outro numero: ");
    scanf("%d", &y);

    total = x + y;

    printf("\nO resultado da soma e: %d", total);

    return(0);
}