#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
5.	Receba do usu�rio um vetor com 10 posi��es.
Em seguida dever� ser impresso o maior e o menor elemento do vetor.
Exiba em que posi��es apareceu o maior n�mero e em que posi��es
apareceu o menor n�mero.
Se todos os n�meros armazenados no vetor forem iguais informe ao usu�rio.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, vet[9], menor, pmenor, maior=0, pmaior, igual=1;

    for (i=0; i<10; i++)
    {
        printf("Digite um n�mero:\n");
        scanf("%i", &vet[i]);

        if(vet[i] < menor){
            menor = vet[i];
            pmenor = i;
        }
        if(vet[i] > maior){
            maior = vet[i];
            pmaior = i;
        }
        if(vet[i] == vet[i-1]){
            igual++;
        }
    }


    if(igual == 10){
        printf("\nTodos os n�meros s�o iguais\n");
        printf("N�meros Iguais: %i\n", igual);

    }else{
        printf("\nMenor n�mero: %i | Posi��o[%i]\n", menor, pmenor);
        printf("Maior n�mero: %i | Posi��o[%i]\n", maior, pmaior);
    }
}

