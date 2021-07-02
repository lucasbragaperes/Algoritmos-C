#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
1.	Leia um vetor de 6 posi��es.
Exiba a quantidade de valores pares que est�o armazenados no vetor.
Exiba tamb�m a posi��o e o respectivo par.
Informe ao usu�rio caso n�o tenha sido digitado nenhum n�mero par no vetor.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, pares=0, impares=0, vetor[6];

    // Inser��o de dados no vetor
    for(i=1; i<=6; i++)
    {
        // La�o de repeti��o para garantir n�mero >= 0
        do
        {
            printf("Digite um n�mero maior ou igual a zero: \n");
            scanf("%i", &vetor[i]);

            if(vetor[i] < 0)
                printf("\nO n�mero deve ser maior ou igual a zero!\n\n");

        }while(vetor[i] < 0);

        // 1. Contador de n�meros pares e impares no vetor
        // 2. N�mero par digitado e respectiva posi��o no vetor
        if(vetor[i] % 2 == 0){
        pares++;
        printf("N�mero par: %i\n", vetor[i]);
        printf("Posi��o no vetor: %i\n", i);
        }else{
        impares++;
        }
    }

    // Total de pares no vetor
    printf("\n#####################################\n");
    printf("\nRESULTADO\n");
    printf("Qtde total de n� pares: %i\n", pares);

    // Informa ao usu�rio que n�o h� n�meros pares
    if(impares==6)
        printf("N�o h� n�meros pares\n");
    printf("\n#####################################\n");
}
