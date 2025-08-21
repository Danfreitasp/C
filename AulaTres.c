//Entrada e saída de dados
#include <stdio.h>

int main(){
int idade;
float altura;
char nome[20];
    
printf("Digite sua idade: ");
scanf("%d", &idade); 
printf("Sua Idade é: %d anos\n", idade);

printf("Digite sua altura: ");
scanf("%f", &altura); 
printf("Sua altura é: %.2f metros\n", altura);

printf("Digite seu nome: ");
scanf("%s", nome);
printf("Seu nome é: %s\n", nome);

return 0;
}

/*
%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
*/
