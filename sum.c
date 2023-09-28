#include <stdio.h>

int main()
{
    int n, n2, output;
    printf("Digite um numero para ser somado!\n");
    scanf("%d", &n);
    printf("Digite outro numero para ser somado!\n");
    scanf("%d", &n2);
    output = n + n2;
    printf("O resultado é %d\n", output);
    return 0;
}