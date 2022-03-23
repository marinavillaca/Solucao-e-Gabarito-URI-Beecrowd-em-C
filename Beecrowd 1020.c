#include <stdio.h>

    int main()
    {
        int num, ano, mes, dias;

        scanf("%d", &num);

        ano = num/365;
        mes = (num%365)/30;
        dias = (num%365)%30;

        printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dias);

        return 0;
    }
