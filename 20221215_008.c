#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;
    printf("Informe a temperatura em F: ");
    scanf("%f", &c);
    f = (c*9/5)+32;
    printf("A temperatura em celsius %c: %.2f",130,f);
    return 0;
}
