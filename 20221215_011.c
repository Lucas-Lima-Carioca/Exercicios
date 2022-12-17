#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas, vlrHora;
    printf("Informe sua carga horario no mes: ");
    scanf("%f", &horas);
    printf("Informe seu salario por hora: ");
    scanf("%f", &vlrHora);
    printf("Salario bruto: RS%.2f\n",horas* vlrHora);
    printf("Pagou no INSS: RS%.2f\n",horas* vlrHora*0.08);
    printf("Pagou no sindicato: RS%.2f\n",horas* vlrHora*0.05);
    printf("Salario liquido: RS%.2f\n",horas* vlrHora*0.76);

    return 0;
}
