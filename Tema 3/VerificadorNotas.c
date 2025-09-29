#include <stdio.h>

int main(){

    float nota1, nota2, nota3, media;
    int opcao;

    printf("***Calculador de média e aprovação de um aluno***\n");
    printf("*Digite 1* para calcular a média de 3 notas\n");
    printf("*Digite 2* para verificar a aprovação do aluno\n");
    printf("*Digite 3* para sair\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite a primeira nota: ");
            scanf("%f", &nota1);
            printf("Digite a segunda nota: ");
            scanf("%f", &nota2);
            printf("Digite a terceira nota: ");
            scanf("%f", &nota3);

            if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10 || nota3 < 0 || nota3 > 10) {
                printf("Erro: As notas devem estar entre 0 e 10.\n");
            } else {
            (media = (nota1 + nota2 + nota3) / 3);
            printf("A média do aluno é: %.2f\n", media);
            }
            break;

        case 2:
            printf("Digite a média do aluno: ");
            scanf("%f", &media);
            
            media >= 6.0 ? printf("Aluno aprovado!\n") : printf("Aluno reprovado!\n");
            printf("Média: %.2f, o mínimo para aprovação é 6.\n", media);
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        
    }
}