#include <stdio.h>

int main()
{
    int initial, limit;
    initial = 1;
    printf("Até quando deseja contar?\n");
    scanf("%d", &limit);
    printf("Começou!!!!\n");
    while (limit >= initial)
    {
        printf("Contando até %d! Já estou no %d.\n", limit, initial);
        initial++;
    }
    printf("Terminou!!!\n");
    return 0;
}