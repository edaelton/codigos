#include <stdio.h>

int main ()
{
    int num, tab;

    printf("digite um numero para calculo de sua tabuada: \n");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        tab = num * i;
        
        printf("%d x %d = %d.\n", num, i, tab);
    }
    
    return(0);
}