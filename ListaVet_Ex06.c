#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
6.	Leia 6 valores inteiros e, em seguida, mostre na tela
os valores lidos em ordem inversa.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, valores[5];

    for (i=0; i<6; i++){

        printf("Digite um número:\n");
        scanf("%i", &valores[i]);
    }

    printf("\n###### RESULTADO ######\n");

    for (i=5; i>=0; i--){
        printf("%i\n", valores[i]);
    }
}
