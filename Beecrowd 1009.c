#include <stdio.h>

int main(){

    char nome[50];
    double salarioFixo, vendas, total;

    scanf("%s %lf %lf", &nome, &salarioFixo, &vendas);

    total = 0.15*vendas + salarioFixo;

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
