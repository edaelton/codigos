#include <stdio.h>
#include <stdlib.h>
#include <time.h>s

int main() {

    int segundos = time(0);
    srand(segundos);

    int n1 = (rand() * rand()) % 61;
    int n2 = (rand() * rand()) % 61;
    int n3 = (rand() * rand()) % 61;
    int n4 = (rand() * rand()) % 61;
    int n5 = (rand() * rand()) % 61;
    int n6 = (rand() * rand()) % 61;

    printf("%d %d %d %d %d %d\n", n1, n2, n3, n4, n5, n6);

}