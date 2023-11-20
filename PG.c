#include <stdio.h>
#include <math.h>

int main()
{
    int vetor[22];
    int sn, an;

    for (int i = 0; i < 22; i++)
    {
        scanf("%d", &vetor[i]);
    }

    an = vetor[0] * pow((vetor[1] / (float)vetor[0]), 22 - 1);
    printf("an : %d\n", an);

    sn = (vetor[0] * (pow((vetor[1] / (float)vetor[0]), 22) - 1)) / ((vetor[1] / (float)vetor[0]) - 1);
    printf("sn : %d\n", sn);

    return 0;
}
