#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
8.	Efetue a leitura de dez elementos para o vetor A.
Construa o vetor B, observando a seguinte lei de forma��o:
se o valor do �ndice do vetor for par,
o valor do elemento correspondente do vetor A deve ser multiplicado pelo valor 5;
sendo o �ndice �mpar, o valor do elemento correspondente do vetor A
dever� ser somado ao valor existente o valor 5.
Mostre o conte�do dos dois vetores.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, veta[9], vetb[9];

    for(i=0; i<10; i++){
        printf("Digite o %i� n�mero: \n", i+1);
        scanf("%i", &veta[i]);

        if(veta[i] % 2 == 0){
            vetb[i] = veta[i] * 5;
        }else{
            vetb[i] = veta[i] + 5;
        }
    }
    for(i=0; i<10; i++){
        printf("Vetor A[%i] = %i | Vetor B[%i] = %i\n", i, veta[i], i ,vetb[i]);
    }
}
