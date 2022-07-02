#include <stdio.h>

int main()

{
    
    int x, y, produto;

    printf("Ola. vamos calcular o produto de dois numeros. digite um primeiro valor: \n");
    scanf("%d", &x);
    printf("Digite outro numero: \n");
    scanf("%d", &y);
    
    produto = x * y;

    printf("O produto e: %d", produto);

    return(0);
   
}