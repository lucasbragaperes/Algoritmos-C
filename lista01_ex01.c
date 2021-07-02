#include<stdio.h>
#include <locale.h> // Biblioteca para adicionar acentuação na função "printf"

/*
1.	Receba via teclado dois números quaisquer e exiba a soma entre eles.
*/

main()
{
    setlocale(LC_ALL, ""); // Função da Biblioteca locale.h

    int a, b, soma; // Variáveis

    printf("Digite dois numeros quaisquer\n");
    scanf("%i %i", &a, &b);

    soma = a+b; // Operação

    printf("A soma de %i + %i é igual a: %d\n", a, b, soma);
}
