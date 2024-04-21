#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa solicita ao usuário dois valores e imprime a soma deles na tela.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para calcular a soma de dois valores
int soma(int valor1, int valor2) {
    return valor1 + valor2;
}

// Função principal
int main() {
    int numero1, numero2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Calcula a soma dos números utilizando a função soma
    int resultado = soma(numero1, numero2);

    // Exibe o resultado da soma na tela
    printf("A soma de %d e %d é: %d\n", numero1, numero2, resultado);

    return 0;
}
