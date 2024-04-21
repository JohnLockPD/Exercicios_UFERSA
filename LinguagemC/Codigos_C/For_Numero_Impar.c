#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

int main() {
    // Loop para cada número no intervalo de 1 a 11
    for (int i = 1; i <= 11; i++) {
        // Verifica se o número é ímpar
        if (i % 2 != 0) {
            // Calcula o fatorial do número ímpar
            int fatorial = 1;
            for (int j = 1; j <= i; j++) {
                fatorial *= j;
            }
            // Exibe o resultado
            printf("%d! = %d\n", i, fatorial);
        }
    }
    return 0;
}
