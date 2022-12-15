#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float n3;
    printf("Informe dois valores inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("Informe um valor real: ");
    scanf("%f", &n3);
    printf("O primeiro valor eh: %d\n", n1*n2);
    printf("O segundo valor eh: %.2f\n",3*n1+n3*n3*n3);

    return 0;
}
