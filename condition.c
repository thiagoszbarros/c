#include <stdio.h>

int main()
{
    int age;
    printf("Digite sua idade para verificação!\n");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("Maior de idade!\n");
    }
    else
    {
        printf("Menor de idade\n");
    }
    return 0;
}