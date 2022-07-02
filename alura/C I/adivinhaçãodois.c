#include <stdio.h>

int main()

{
    printf("========================\n");
    printf("=BEM VINDO AO NOSO JOGO=\n");
    printf("========================\n");

    int numerosecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

        while (ganhou == 0)
        {
            printf("tentativa %d.\n", tentativas);
            printf("Qual e o seu chute? \n");
            scanf("%d", &chute);
            printf("O seu chute e %d.\n", chute);

            int acertou = (chute == numerosecreto);
            int menor = (chute < numerosecreto);

            if (chute < 0)
            {
                printf("so numero positivo abestalhado.\n"); 
                continue;   
            }
            if (acertou)
            {
                printf("adivinho miseravi.\n");
                if (tentativas == 1)
                {
                    printf("E de primeira cagao.\n");
                }
                else
                {
                    printf("Depois de tentar tanto, uma hora acerta, ne.\n");
                }
                ganhou = 1;
            }
            else if (menor)
            {
                printf("pense mais alto.\n");
            }
            else
            {
                printf("nao exagera.\n");
            }
            
            tentativas++;
        }
        
    printf("Fim de jogo.");

    return(0);
}
