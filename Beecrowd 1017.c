#include <stdio.h>

    int main()
{
    int tempo, vm;
    double litros;

    scanf("%d %d", &tempo, &vm);
    litros = (tempo*vm)/12.0;
    printf("%.3lf\n", litros);

    return 0;
}
