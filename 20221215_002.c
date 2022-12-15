#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d, total;
    printf("Informe as 4 notas do aluno: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    total = (a+b+c+d)/4;
    printf("A m%cdia do aluno %c: %.2f",130,130,total);
    return 0;
}
