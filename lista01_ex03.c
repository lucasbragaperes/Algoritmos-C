#include<stdio.h>
#include<locale.h>

main()
{
    setlocale(LC_ALL, "");

    float a, b, dif;

    printf("Digite dois n�meros: \n");
    scanf("%f %f", &a, &b);

    if (a == b)
    {
        printf("FIM - Os n�meros s�o iguais");
    }
    else if (a > b)
    {
        dif = a - b;
        printf("A diferen�a entre %.2f e %.2f �: %.2f", a, b, dif);
    }else
    {
        dif = b - a;
        printf("A diferen�a entre %.2f e %.2f �: %.2f", b, a, dif);
    }


}
