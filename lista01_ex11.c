#include <stdio.h>
#include <locale.h>
#include <math.h>

/*
autor: Lucas Braga Peres
*/

main()
{
    setlocale(LC_ALL,"Portuguese");

    float num1, num2, num3, num4, soma;

    do
    {
        do
        {
            printf("Digite um número maior que 10 e menor que 25: \n");
            scanf("%f", &num1);

        }while (num1 <= 10 || num1 >= 25);

         do
        {
            printf("Digite um número maior ou igual a zero: \n");
            scanf("%f", &num2);

        }while (num2 < 0);

        num3 = num1 + num2;
        num4 = num1 * num2 * num3;

        soma = pow(num1, 2) + pow(num2, 2) +  pow(num3, 2) +  pow(num4, 2);

        if (soma < 50000)
            printf("Digite novos dados, a soma é menor que 50000.\n");

     }while (soma < 50000);

     printf("A soma de (%.0f^2) + (%.0f^2) + (%.0f^2) + (%.0f^2) é: %.0f \n", num1, num2, num3, num4, soma);
}
