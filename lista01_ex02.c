#include<stdio.h>
#include <locale.h> // Biblioteca para adicionar acentuação na função "printf"

/*
2.	Ler um número inteiro e imprimir seu sucessor e seu antecessor.
*/

main()
{
    setlocale(LC_ALL, ""); // Função da Biblioteca locale.h

    int x, ant, suc; // Variáveis

    printf("Digite um número inteiro:\n");
    scanf("%d", &x);

    // Operações
    ant = x - 1;
    suc = x + 1;

    printf("O número antecessor de %d é: %d\n", x, ant);
    printf("O número sucessor de %d é: %d\n", x, suc);

}
