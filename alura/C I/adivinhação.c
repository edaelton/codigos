#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 5

int main()

{
    printf("========================\n");
    printf("=BEM VINDO AO NOSO JOGO=\n");
    printf("========================\n");

    int segundos = time(0);
    srand (segundos);
    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    double pontos = 1000;
    int tentativas = 1;

    for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    {
        printf("tentativa %d de %d.\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual e o seu chute? \n");
        scanf("%d", &chute);
        printf("O seu chute e %d.\n", chute);

        int acertou = (chute == numerosecreto);
        int menor = (chute < numerosecreto);
        int maior = (chute > numerosecreto);

        if (chute < 0)
        {
            printf("so numero positivo abestalhado.\n"); 
            i--;

            continue;   
        }
        if (acertou)
        {
            printf("adivinho miseravi.\n");
            break;
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

        double pontosperdidos = (chute - numerosecreto) / 2.0;
        pontos = pontos - fabs((double) pontosperdidos);
    }
    
    printf("Fim de jogo.\n");
    printf("total de pontos: %.1f: ", pontos);

    return(0);
}