#include <stdio.h>

int main(){
    char opcao;
    int numero1, numero2, resultado;
    printf("Digite uma opcao (a para soma, b para subtração ou c para multiplicação) em letra minúscula: ");
    fflush(stdout); // Garante que o prompt seja exibido antes do scanf para que não pule a leitura
    scanf(" %c", &opcao); // Adiciona espaço para ignorar '\n'
    printf("Digite o primeiro número da operação: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número da operação: ");
    scanf("%d", &numero2);

    switch (opcao)
    {
    case 'a':
        resultado = numero1 + numero2;
        printf("Resultado: %d\n", resultado);
        break;
    case 'b':
        resultado = numero1 - numero2;
        printf("Resultado: %d\n", resultado);
        break;
    case 'c':
        resultado = numero1 * numero2;
        printf("Resultado: %d\n", resultado);
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
}