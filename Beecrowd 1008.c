#include <stdio.h>

int main()
{
    int number, horas;
    double valor_hora, salary;

    scanf("%d %d %lf", &number, &horas, &valor_hora);

    salary = horas*valor_hora;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);

    return 0;
}
