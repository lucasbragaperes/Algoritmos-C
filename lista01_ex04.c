#include<stdio.h>
#include<locale.h>

/*
4.	Receba o pre�o de um produto e calcular novo pre�o com desconto de 9%.
*/

main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float preco, novo;

    do
    {
        printf("Digite o pre�o do produto: \n");
        scanf("%f", &preco);

        if (preco <= 0)
        {
            printf("O pre�o deve ser maior que zero.\n\n");
        }
    }while(preco <= 0);

    if (preco > 0)
        {
            novo = preco * 0.91;
            printf("O novo pre�o com desconto �: R$ %.2f\n", novo);
        }
}
