#include <stdio.h>

    int main()
{
    int a,b,c;
    int maiorAB, maiorXC;

    scanf ("%d %d %d", &a, &b, &c);
    maiorAB = (a+b+ abs(a-b))/2.0;
    maiorXC = (maiorAB+c + abs(maiorAB-c))/2.0;

    printf("%d eh o maior\n", maiorXC);

    return 0;
}
