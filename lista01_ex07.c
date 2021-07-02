#include<stdio.h>
#include<locale.h>
#include <math.h>

/*
7.	Receba três números onde o primeiro deve ser maior do que zero e menor que 20.
O segundo deve ser negativo e o terceiro representa um número qualquer.
Calcule a soma de cada número elevado ao quadrado.
Se a soma resultar um valor inferior a 1000 solicite novos dados.
*/

main()
{
    setlocale(LC_ALL, "");

    float num1, num2, num3, soma;

    do
    {
        do
        {
            printf("Digite um número maior que zero e menor que vinte: \n");
            scanf("%f", &num1);

            if (num1 <= 0 || num1 >= 20)
                printf("O número deve ser maior que zero e menor que 20. \n");

        }while(num1 <= 0 || num1 >= 20);

        do
        {
            printf("Digite um número negativo: \n");
            scanf("%f", &num2);

            if (num2 >= 0)
                printf("O número deve ser negativo. \n");

        }while(num2 >= 0);

        printf("Digite um número qualquer: \n");
        scanf("%f", &num3);

        soma = pow(num1, 2) + pow(num2, 2) + pow(num3, 2);

        if (soma < 1000)
            printf("Digite novamente todos os dados. \n");

    }while(soma < 1000);

    printf("A soma de (%.2f ^ 2) + (%.2f ^ 2) + (%.2f ^ 2) é: %.2f\n", num1, num2, num3, soma);

}
