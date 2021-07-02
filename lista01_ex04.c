#include<stdio.h>
#include<locale.h>

/*
4.	Receba o preço de um produto e calcular novo preço com desconto de 9%.
*/

main()
{
    setlocale(LC_ALL, "PORTUGUESE");

    float preco, novo;

    do
    {
        printf("Digite o preço do produto: \n");
        scanf("%f", &preco);

        if (preco <= 0)
        {
            printf("O preço deve ser maior que zero.\n\n");
        }
    }while(preco <= 0);

    if (preco > 0)
        {
            novo = preco * 0.91;
            printf("O novo preço com desconto é: R$ %.2f\n", novo);
        }
}
