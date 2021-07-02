#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL, "");

    float a, b, dif;

    printf("Digite dois números: \n");
    scanf("%f %f", &a, &b);

    if (a == b)
    {
        printf("FIM - Os números são iguais");
    }
    else if (a > b)
    {
        dif = a - b;
        printf("A diferença entre %.2f e %.2f é: %.2f", a, b, dif);
    }else
    {
        dif = b - a;
        printf("A diferença entre %.2f e %.2f é: %.2f", b, a, dif);
    }


}
