#include<stdio.h>
#include<locale.h>

/*
5.	Receba dois números quaisquer,
onde o primeiro deve ser maior que zero e o segundo menor ou igual a zero.
Calcule e mostre na tela o produto entre eles.
*/

main()
{
    setlocale(LC_ALL, "");

    float a, b, produto;

    do
    {
        printf("Digite um número maior que zero: \n");
        scanf("%f", &a);

        if (a <= 0)
            printf("O número deve ser maior que zero. \n");

    }while(a <= 0);

    do
    {
        printf("Digite um número menor ou igual a zero: \n");
        scanf("%f", &b);

        if (b > 0)
            printf("O número deve ser menor ou igual a zero. \n");

    }while(b > 0);

    produto = a * b;
    printf("O produto de %.2f por %.2f é: %.2f \n", a, b, produto);
}
