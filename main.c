/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int resto;
    
    //solicitar numero
    printf("Diite um Número inteiro: ");
    scanf("%d", &numero);
    
    // Calculando o resto por 2 (operador binário)
    resto = numero % 2;
    
    //Estrututa de decisão
    if (resto == 0) {
        printf("O Número %d é PAR!\n", numero);
    } else {
        printf("O número %d é IMPAR!\n", numero);
    }

    return 0;
}