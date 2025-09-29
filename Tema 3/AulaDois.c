#include <stdio.h>

int main() {

    int idade = 29;
    float altura = 1.78;
    double saldoBancario = 12345.67;
    char inicial = 'A';
    char nome[20] = "Daniel Pinto";

    printf("idade: %d", idade);
    printf("\nnome: %s", nome);
    printf("\naltura: %.2f", altura);
    printf("\nsaldo bancario: %.2lf", saldoBancario);
    printf("\ninicial: %c", inicial);
}

/*
%d: Imprime um inteiro.
 
%i: Equivalente a %d.
 
%f: Imprime um número de ponto flutuante no formato padrão.
 
%e: Imprime um número de ponto flutuante na notação científica.
 
%c: Imprime um único caractere.
 
%s: Imprime uma cadeia (string) de caracteres.
*/