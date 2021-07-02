#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
4.	Leia três vetores (A, B e C) de uma dimensão com 5 elementos cada.
Construa o vetor D, sendo este a junção dos três outros vetores.
Armazene no vetor D o primeiro elemento do vetor A depois do B e do C
e assim sucessivamente.  Apresentar o conteúdo de todos os vetores.
Exiba quantas vezes apareceram números negativos no vetor D.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");
    int i, negativo=0, a[5], b[5], c[5], d[15];

    // A
    for(i=0; i<5; i++)
    {
        printf("Digite o %iº número do vetor A: \n", i+1);
        scanf("%i", &a[i]);
    }

    // B
    for(i=0; i<5; i++)
    {
        printf("Digite o %iº número do vetor B: \n", i+1);
        scanf("%i", &b[i]);
    }

    // C
    for(i=0; i<5; i++)
    {
        printf("Digite o %iº número do vetor C: \n", i+1);
        scanf("%i", &c[i]);
    }

    // D
    for(i=0; i<15; i++)
    {
        //Se tirar essa parte do for, por algum motivo
        //O "negativo" conta 1 a mais
        d[0] = a[0];
        d[1] = b[0];
        d[2] = c[0];

        d[3] = a[1];
        d[4] = b[1];
        d[5] = c[1];

        d[6] = a[2];
        d[7] = b[2];
        d[8] = c[2];

        d[9] = a[3];
        d[10] = b[3];
        d[11] = c[3];

        d[12] = a[4];
        d[13] = b[4];
        d[14] = c[4];


        if(d[i] < 0)
            negativo++;
    }

    // E
    for(i=0; i<5; i++)
    {
        printf("A[%i]=%i B[%i]=%i C[%i]=%i\n", i, a[i], i, b[i], i, c[i]);
    }

    printf("\n");

    // F
    for(i=0; i<15; i++)
    {
        printf("D[%i]=%i\n", i, d[i]);
    }

    printf("\nQuantidade de nº negativos: %i\n", negativo);
}
