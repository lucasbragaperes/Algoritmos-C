#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
5.	Receba do usuário um vetor com 10 posições.
Em seguida deverá ser impresso o maior e o menor elemento do vetor.
Exiba em que posições apareceu o maior número e em que posições
apareceu o menor número.
Se todos os números armazenados no vetor forem iguais informe ao usuário.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, vet[9], menor, pmenor, maior=0, pmaior, igual=1;

    for (i=0; i<10; i++)
    {
        printf("Digite um número:\n");
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
        printf("\nTodos os números são iguais\n");
        printf("Números Iguais: %i\n", igual);

    }else{
        printf("\nMenor número: %i | Posição[%i]\n", menor, pmenor);
        printf("Maior número: %i | Posição[%i]\n", maior, pmaior);
    }
}

