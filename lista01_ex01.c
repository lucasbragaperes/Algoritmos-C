#include<stdio.h>
#include <locale.h> // Biblioteca para adicionar acentua��o na fun��o "printf"

/*
1.	Receba via teclado dois n�meros quaisquer e exiba a soma entre eles.
*/

main()
{
    setlocale(LC_ALL, ""); // Fun��o da Biblioteca locale.h

    int a, b, soma; // Vari�veis

    printf("Digite dois numeros quaisquer\n");
    scanf("%i %i", &a, &b);

    soma = a+b; // Opera��o

    printf("A soma de %i + %i � igual a: %d\n", a, b, soma);
}
