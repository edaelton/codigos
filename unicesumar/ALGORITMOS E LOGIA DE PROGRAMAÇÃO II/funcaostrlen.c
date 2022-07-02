/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include  <string.h>

int main()
{
    char nome [30];
    int tamanho;
    
    printf("Digite o seu nome:\n");
    gets(nome);
    tamanho = strlen(nome);
    printf("O tamanho do nome e: %d", tamanho);
    
    return (0);
}