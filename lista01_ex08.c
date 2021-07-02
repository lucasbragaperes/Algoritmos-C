#include<stdio.h>
#include<locale.h>

/*
8. Faça um programa que receba o ano do nascimento de uma pessoa e o ano atual,
calcule e mostre idade dessa pessoa.
*/

main()
{
    setlocale(LC_ALL, "");

    int nasc, ano, idade;

    printf("Digite o ano que você nasceu:\n");
    scanf("%d", &nasc);

    printf("Digite o ano atual:\n");
    scanf("%d", &ano);

    idade = ano - nasc;

    printf("A sua idade é: %d anos\n", idade);

}
