#include<stdio.h>
#include<locale.h>

/*
9.	O custo ao consumidor de um carro novo é
a soma do preço da fábrica com o percentual de lucro do distribuidor
e dos impostos aplicados ao preço de fábrica.
Receba via teclado o preço de fábrica de um veículo,
o percentual de lucro do distribuidor e o percentual de impostos.
Calcule e mostre:
a)	O valor correspondente ao lucro do distribuidor
b)	O valor correspondente aos impostos
c)	O preço final do veículo
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    float preco, plucro, pimposto;

    // Preço maior que Zero
    do
    {
        printf("Digite o preço de fábrica do carro: \n");
        scanf("%f", &preco);

        if (preco <= 0)
            printf("O preço deve ser um número acima de zero.\n");
    }while (preco <= 0);

    // Lucro entre 0 e 100%
    do
    {
        printf("Digite o lucro em porcentagem (0 a 100): \n");
        scanf("%f", &plucro);

        if (plucro < 0 || plucro > 100)
            printf("O lucro deve ser um número entre 0 e 100.\n");
    }while (plucro < 0 || plucro > 100);

    // Imposto entre 0 e 100%
    do
    {
        printf("Digite o imposto em porcentagem (0 a 100): \n");
        scanf("%f", &pimposto);

        if (pimposto < 0 || pimposto > 100)
            printf("O imposto deve ser um número entre 0 e 100.\n");
    }while (pimposto < 0 || pimposto > 100);

    // Cálculos

    // Preço de Fábrica
    printf("\nPreço de Fábrica: %.2f\n", preco);
    printf("--------------\n");
    // A) Lucro
    plucro = preco * (plucro/100);
    printf("Lucro: R$ %.2f\n", plucro);
    // B) Imposto
    pimposto = preco * (pimposto/100);
    printf("Imposto: R$ %.2f\n", pimposto);
    printf("--------------\n");
    // C) Preço Total
    preco = preco + plucro + pimposto;
    printf("\nPreço Final: R$ %.2f\n", preco);

}
