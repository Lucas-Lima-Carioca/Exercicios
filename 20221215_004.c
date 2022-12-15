#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, area;
    printf("Informe o raio da circuferencia: ");
    scanf("%f", &raio);
    area = raio*raio*3.1415;
    printf("A area da circuferencia %c: %.2f",130,area);

    return 0;
}
