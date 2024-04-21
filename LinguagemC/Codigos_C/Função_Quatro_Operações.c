#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa solicita ao usuário dois valores e realiza diversas operações matemáticas.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para calcular e imprimir a soma de dois números
void soma(int num1, int num2) {
    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2);
}

// Função para calcular e imprimir a subtração de dois números
void subtracao(int num1, int num2) {
    printf("Subtração: %d - %d = %d\n", num1, num2, num1 - num2);
}

// Função para calcular e imprimir a multiplicação de dois números
void multiplicacao(int num1, int num2) {
    printf("Multiplicação: %d * %d = %d\n", num1, num2, num1 * num2);
}

// Função para calcular e imprimir a divisão de dois números
void divisao(int num1, int num2) {
    if (num2 != 0) {
        printf("Divisão: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("Não é possível dividir por zero.\n");
    }
}

// Função principal
int main() {
    int numero1, numero2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Chama as funções para calcular e imprimir a soma, subtração, multiplicação e divisão
    soma(numero1, numero2);
    subtracao(numero1, numero2);
    multiplicacao(numero1, numero2);
    divisao(numero1, numero2);

    return 0;
}
