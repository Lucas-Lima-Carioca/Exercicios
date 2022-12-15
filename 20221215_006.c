#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vlrHora;
    int horas;
    printf("Informe seu salario por hora: ");
    scanf("%f", &vlrHora);
    printf("Informe o quanto voce trabalhou no mes: ");
    scanf("%d", &horas);
    printf("Seu salario %c: %.2f",130,vlrHora*horas);

    return 0;
}
