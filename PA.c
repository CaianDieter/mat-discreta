#include <stdio.h>

int main()
{
    int vetor[35];
    int an, sn;
    printf("insira os numeros do vetor :");

    for (int i = 0; i < 35; i++)
    {

        scanf("%d", &vetor[i]);
    }

        int r = vetor[1] - vetor[0];

    an = vetor[0] + (35 - 1) * r;

    printf("valor de an: %d\n", an);

    sn = (35 * (1 + an)) / 2;

    printf("valor de sn: %d\n", sn);
    return 0;
}