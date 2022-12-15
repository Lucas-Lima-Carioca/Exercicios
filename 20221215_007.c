#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f, c;
    printf("Informe a temperatura em F: ");
    scanf("%f", &f);
    c = (f-32)*5/9;
    printf("A temperatura em celsius %c: %.2f",130,c);
    return 0;
}
