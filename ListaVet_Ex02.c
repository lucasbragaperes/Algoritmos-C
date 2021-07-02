#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
2.	Ler um conjunto de 6 números reais, armazenando-o no vetor A.
Calcular o quadrado das componentes deste vetor,
armazenando o resultado no vetor B. Exiba os dois vetores.

Exemplo: Suponha que você tenha digitado 2 na posição zero do vetor A
no vetor B na mesma posição será o valor de A[0] ao quadrado.
A[0]=2 e B[0]= 4  e assim sucessivamente.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");
    int veta[6], vetb[6];
    int i;

    // Inserção de dados no vetor A
    for(i=0; i<6; i++)
    {
        // Laço de repetição para garantir número >= 0
        do
        {
            printf("Digite um número maior ou igual a zero: \n");
            scanf("%i", &veta[i]);

            if(veta[i] < 0)
                printf("\nO número deve ser maior ou igual a zero!\n\n");

        }while(veta[i] < 0);

        // Armazenamento de resultados no vetor B
        vetb[i] = veta[i] * 2;
 //       printf("Vetor A[%i] = %i e Vetor B[%i] = %i\n", i, veta[i], i, vetb[i]);
    }

    for(i=0; i<6; i++)
    {
        printf("A[%i] = %i | B[%i] = %i\n", i, veta[i], i, vetb[i]);
    }
/*    printf("\n########################\n");
    printf("\nRESULTADO FINAL\n\n");
    printf("A[0] = %i | B[0] = %i\n", veta[0], vetb[0]);
    printf("A[1] = %i | B[1] = %i\n", veta[1], vetb[1]);
    printf("A[2] = %i | B[2] = %i\n", veta[2], vetb[2]);
    printf("A[3] = %i | B[3] = %i\n", veta[3], vetb[3]);
    printf("A[4] = %i | B[4] = %i\n", veta[4], vetb[4]);
    printf("A[5] = %i | B[5] = %i\n", veta[5], vetb[5]);
    printf("\n########################\n");
*/
}
