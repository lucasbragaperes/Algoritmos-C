#include <stdio.h>
#include <locale.h>

main()
{
    setlocale(LC_ALL,"Portuguese");

    float salario, nsalario;

    do
    {
        printf("Digite o seu salário: \n");
        scanf("%f", &salario);

        if (salario <= 0)
            printf("Salário deve ser maior que zero.\n");
    }while (salario <= 0);

    if (salario < 800){
        nsalario = salario * 1.15;
    }else if (salario >= 800 & salario <= 1000){
        nsalario = salario * 1.10;
    }else{
        nsalario = salario * 1.05;
    }

    printf("Salário antigo: R$ %.2f\n", salario);
    printf("Salário novo: R$ %.2f\n", nsalario);

}
