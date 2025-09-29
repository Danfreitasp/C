#include <stdio.h>

int main(){

    int estoque, estoqueMin = 100;
    float temperatura, umidade;

    printf("Digite o estoque atual: \n");
    scanf("%d", &estoque);
    printf("Digite a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Digite a umidade: \n");
    scanf("%f", &umidade);

    if(estoque < estoqueMin){
        printf("Repor estoque!\n");
    } else {
        printf("Estoque ok!\n");
    }

    if(temperatura > 28.00)
        printf("Temperatura alta!\n");
    else
        printf("Temperatura ok!\n");

    if(umidade > 70.00 && umidade <= 100.00)
        printf("Umidade alta!\n");
    else if(umidade >= 0 && umidade <= 70.00)
        printf("Umidade ok!\n");
    else (umidade < 0.00);
        printf("Umidade abaixo de zero.\n");
    return 0;
    
}