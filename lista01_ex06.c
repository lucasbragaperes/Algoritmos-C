#include<stdio.h>
#include<locale.h>

/*
6.	Receba dois n�meros quaisquer,
calcule e mostre na tela o resultado da divis�o do segundo pelo primeiro.
*/

main()
{
    setlocale(LC_ALL, "");

    float divisor, dividendo, quociente;

    do
    {
        printf("Digite o divisor, n�mero maior que zero: \n");
        scanf("%f", &divisor);

        if (divisor <= 0)
        {
            printf("Deve ser maior que zero. \n");
        }

    }while (divisor <= 0);

    printf("Digite qualquer n�mero para ser o dividendo: \n");
    scanf("%f", &dividendo);

    quociente = dividendo / divisor;

    printf("RESULTADO: %.1f / %.1f = %.1f", divisor, dividendo, quociente);
}
