#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
1.	Leia um vetor de 6 posições.
Exiba a quantidade de valores pares que estão armazenados no vetor.
Exiba também a posição e o respectivo par.
Informe ao usuário caso não tenha sido digitado nenhum número par no vetor.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, pares=0, impares=0, vetor[6];

    // Inserção de dados no vetor
    for(i=1; i<=6; i++)
    {
        // Laço de repetição para garantir número >= 0
        do
        {
            printf("Digite um número maior ou igual a zero: \n");
            scanf("%i", &vetor[i]);

            if(vetor[i] < 0)
                printf("\nO número deve ser maior ou igual a zero!\n\n");

        }while(vetor[i] < 0);

        // 1. Contador de números pares e impares no vetor
        // 2. Número par digitado e respectiva posição no vetor
        if(vetor[i] % 2 == 0){
        pares++;
        printf("Número par: %i\n", vetor[i]);
        printf("Posição no vetor: %i\n", i);
        }else{
        impares++;
        }
    }

    // Total de pares no vetor
    printf("\n#####################################\n");
    printf("\nRESULTADO\n");
    printf("Qtde total de nº pares: %i\n", pares);

    // Informa ao usuário que não há números pares
    if(impares==6)
        printf("Não há números pares\n");
    printf("\n#####################################\n");
}
