#include <stdio.h>
int main()
{
    char escolha;
    char *opcoes[] = {"Vectra", "Astra", "Omega", "Corsa", "Zafira"};
    for (int i = 0; i < 5; i++)
        printf("O carro é %s\n", opcoes[i]);

    printf("Deseja contar de 1 a 10?\n");
    printf("Digite s para continuar ou n para parar o código.\n");
    scanf(" %c", &escolha);

    if (escolha == 's' || escolha == 'S')
    {
        int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        for (int j = 0; j < 10; j++)
            printf("O número é %d\n", numeros[j]);
    }
    else
    {
        printf("Ok, até mais!\n");
        return 0;
    }

    return 0;
}