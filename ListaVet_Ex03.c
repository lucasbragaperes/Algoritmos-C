#include <stdio.h>
#include <locale.h>

// Nome: Lucas Braga Peres RA: 0050481923026

/*
3.	Leia a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a m�dia geral.
As notas devem ser maiores ou iguais a zero e menores ou iguais a 10.
*/

main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, soma=0, media=0, vetnotas[14];
    char alunos[14][30];

    // Inser��o de dados no vetor de Alunos
    for(i=0; i<=14; i++)
    {
        printf("\nDigite o nome do Aluno: \n");
        scanf("%s", &alunos[i]);

        printf("\nNome do Aluno n� %i: %s \n", i+1, alunos[i]);

        // La�o de repeti��o para garantir notas de 0 a 10
        do
        {
            printf("Informe a nota do aluno:\n");
            scanf("%i", &vetnotas[i]);

            if(vetnotas[i] < 0 || vetnotas[i] > 10)
                printf("A nota deve ser entre 0 e 10!\n\n");
        }
        while(vetnotas[i] < 0 || vetnotas[i] > 10);

        // Acumula todas as notas do vetor na variavel soma
        soma += vetnotas[i];
    }

    printf("\n########## RESULTADO ###########\n");
    // Ap�s coletar 15 nomes e notas, mostra na tela todas elas
    for(i=0; i<=14; i++)
    {
        printf("%i� Aluno: %s -> Nota: %i\n", i+1, alunos[i], vetnotas[i]);
    }
    // Realiza a m�dia de todas as notas acumuladas na variavel soma
    media = soma / i;
    printf("\nA m�dia das notas �: %i\n", media);
}
