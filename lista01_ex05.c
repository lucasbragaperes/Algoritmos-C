#include<stdio.h>
#include<locale.h>

/*
5.	Receba dois n�meros quaisquer,
onde o primeiro deve ser maior que zero e o segundo menor ou igual a zero.
Calcule e mostre na tela o produto entre eles.
*/

main()
{
    setlocale(LC_ALL, "");

    float a, b, produto;

    do
    {
        printf("Digite um n�mero maior que zero: \n");
        scanf("%f", &a);

        if (a <= 0)
            printf("O n�mero deve ser maior que zero. \n");

    }while(a <= 0);

    do
    {
        printf("Digite um n�mero menor ou igual a zero: \n");
        scanf("%f", &b);

        if (b > 0)
            printf("O n�mero deve ser menor ou igual a zero. \n");

    }while(b > 0);

    produto = a * b;
    printf("O produto de %.2f por %.2f �: %.2f \n", a, b, produto);
}
