#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
7.	Leia o vetor A tipo vetor com 10 elementos positivos.
Construa o vetor B de mesmo tipo, e cada elemento de B deve ser
a metade de cada elemento de A.
Exiba em que Vetor e em que posições apareceram valores superiores a 4.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i;
    float veta[9], vetb[9];

    for(i=0; i<10; i++){

        do
        {
        printf("Vetor A - Digite um número positivo: \n");
        scanf("%f", &veta[i]);

        if(veta[i] < 0)
            printf("\nO número deve ser positivo!!!\n");

        }while(veta[i] < 0);

        vetb[i] = veta[i] / 2;
    }

    for(i=0; i<10; i++){
        if(veta[i] > 4)
        printf("Vetor A[%i] = %.0f | Vetor B[%i] = %.1f\n", i, veta[i], i, vetb[i]);
    }
}
