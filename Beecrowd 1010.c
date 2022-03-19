#include <stdio.h>

int main()
{
    int code1, code2, num1,num2;
    double valor1, valor2, valorTotal;
    
    scanf ("%d %d %lf", &code1, &num1, &valor1);
    scanf ("%d %d %lf", &code2, &num2, &valor2);
    
    valorTotal = num1*valor1 + num2*valor2;

    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);

    return 0;
}
