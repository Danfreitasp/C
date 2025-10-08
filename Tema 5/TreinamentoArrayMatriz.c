#include <stdio.h>
    int main()
    {

        int index;

        char *alunos [4][3]= {
            {"Aluno 1", "Nota 1 = 9,5", "Nota 2 = 7,5"},
            {"Aluno 2", "Nota 1 = 6,5", "Nota 2 = 9,5"},
            {"Aluno 3", "Nota 1 = 5,5", "Nota 2 = 7,5"},
            {"Aluno 4", "Nota 1 = 8,5", "Nota 2 = 6,5"}
        };

        printf("Digite o numero do aluno que queira ver as notas.\n");
        printf("Digite 1 - para o primeiro aluno.\n");
        printf("Digite 2 - para o segundo aluno.\n");
        printf("Digite 3 - para o terceiro aluno.\n");
        printf("Digite 4 - para o quarto aluno.\n");
        printf("Sua escolha: ");
        scanf("%d", &index);

        printf("As notas do %s, são: \n%s.\n%s.\n", alunos[index-1][0], alunos[index-1][1], alunos[index-1][2]);
        
        return 0;
    }