#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

int main() {
    int soma = 0;

    // Loop de 1 até 500
    for (int i = 1; i <= 500; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            soma += i; // Adiciona o número à soma
        }
    }

    printf("O somatório dos valores pares de 1 a 500 é: %d\n", soma);

    return 0;
}
