#include <stdio.h>
int main() {
    int idade, renda, dependentes;

    printf("Digite a idade: ");
    scanf("%d", &idade);
    printf("Digite a renda: ");
    scanf("%d", &renda);
    printf("Digite o numero de dependentes: ");
    scanf("%d", &dependentes);

    if (idade >= 18){
        if (renda <2500){
            if (dependentes >=3){
                printf("Tem direito ao beneficio\n");
            } else { printf("Nao tem direito ao beneficio devido a quantidade de dependentes ser menor que 3.\n"); }
        } else { printf("Nao tem direito ao beneficio devido a renda ser maior que 2500.\n"); }
    } else { printf("Nao tem direito ao beneficio porque é menor de idade.\n"); }

}