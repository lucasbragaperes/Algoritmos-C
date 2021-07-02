#include<stdio.h>
#include<locale.h>

/*
9.	O custo ao consumidor de um carro novo �
a soma do pre�o da f�brica com o percentual de lucro do distribuidor
e dos impostos aplicados ao pre�o de f�brica.
Receba via teclado o pre�o de f�brica de um ve�culo,
o percentual de lucro do distribuidor e o percentual de impostos.
Calcule e mostre:
a)	O valor correspondente ao lucro do distribuidor
b)	O valor correspondente aos impostos
c)	O pre�o final do ve�culo
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    float preco, plucro, pimposto;

    // Pre�o maior que Zero
    do
    {
        printf("Digite o pre�o de f�brica do carro: \n");
        scanf("%f", &preco);

        if (preco <= 0)
            printf("O pre�o deve ser um n�mero acima de zero.\n");
    }while (preco <= 0);

    // Lucro entre 0 e 100%
    do
    {
        printf("Digite o lucro em porcentagem (0 a 100): \n");
        scanf("%f", &plucro);

        if (plucro < 0 || plucro > 100)
            printf("O lucro deve ser um n�mero entre 0 e 100.\n");
    }while (plucro < 0 || plucro > 100);

    // Imposto entre 0 e 100%
    do
    {
        printf("Digite o imposto em porcentagem (0 a 100): \n");
        scanf("%f", &pimposto);

        if (pimposto < 0 || pimposto > 100)
            printf("O imposto deve ser um n�mero entre 0 e 100.\n");
    }while (pimposto < 0 || pimposto > 100);

    // C�lculos

    // Pre�o de F�brica
    printf("\nPre�o de F�brica: %.2f\n", preco);
    printf("--------------\n");
    // A) Lucro
    plucro = preco * (plucro/100);
    printf("Lucro: R$ %.2f\n", plucro);
    // B) Imposto
    pimposto = preco * (pimposto/100);
    printf("Imposto: R$ %.2f\n", pimposto);
    printf("--------------\n");
    // C) Pre�o Total
    preco = preco + plucro + pimposto;
    printf("\nPre�o Final: R$ %.2f\n", preco);

}
