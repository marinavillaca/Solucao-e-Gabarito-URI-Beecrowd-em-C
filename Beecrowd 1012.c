#include <stdio.h>

int main()
{
    double a, b,c;
    double triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%lf %lf %lf", &a, &b, &c);
    triangulo = a*c/2.0;
    circulo = 3.14159*c*c;
    trapezio = (a+b)*c/2.0;
    quadrado = b*b;
    retangulo = a*b;

    printf( "TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);

    return 0;
}
