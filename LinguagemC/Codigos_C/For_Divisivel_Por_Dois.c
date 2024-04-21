#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

int main() {
    int total = 0;

    // Loop de 10 até 50
    for (int i = 10; i <= 50; i++) {
        // Verifica se o número é divisível por 2
        if (i % 2 == 0) {
            printf("%d ", i); // Exibe o número
            total++; // Incrementa o contador de números exibidos
        }
    }

    printf("\nTotal de numeros divisíveis por 2: %d\n", total);

    return 0;
}
