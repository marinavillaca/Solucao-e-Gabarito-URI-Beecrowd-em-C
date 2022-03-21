#include <stdio.h>

    int main()
{
    int num;
    int horas, minutos, segundos;

    scanf("%d", &num);
    horas = num/3600;
    minutos = (num%3600)/60;
    segundos = num%60;

    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}
