#include<stdio.h>
#include <locale.h> // Biblioteca para adicionar acentua��o na fun��o "printf"

/*
2.	Ler um n�mero inteiro e imprimir seu sucessor e seu antecessor.
*/

main()
{
    setlocale(LC_ALL, ""); // Fun��o da Biblioteca locale.h

    int x, ant, suc; // Vari�veis

    printf("Digite um n�mero inteiro:\n");
    scanf("%d", &x);

    // Opera��es
    ant = x - 1;
    suc = x + 1;

    printf("O n�mero antecessor de %d �: %d\n", x, ant);
    printf("O n�mero sucessor de %d �: %d\n", x, suc);

}
