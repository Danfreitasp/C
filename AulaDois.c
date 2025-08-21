//Entrada e saída de dados
#include <stdio.h>

int main(){
int idade;
int quantidade = 1;
float altura = 1.78;
double peso = 83.500;
double saldoBancario = 139321.90;

char inicial = 'A';
char nome[20];

idade = 29;
quantidade = 15;

    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f metros\n", altura);
    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    printf("Inicial do Nome: %c\n", inicial);
    printf("Nome: %s\n", nome);
 
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