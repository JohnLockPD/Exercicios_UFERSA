#include <stdio.h>
#include <stdbool.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função para verificar se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x, y;

    // Solicita e lê os valores de x e y
    printf("Digite o valor de x (número natural maior que zero): ");
    scanf("%d", &x);
    printf("Digite o valor de y (número natural maior que zero): ");
    scanf("%d", &y);

    // Verifica se x e y são válidos
    if (x <= 0 || y <= 0 || y < x) {
        printf("Intervalo inválido.\n");
        return 1;
    }

    // Exibe os números primos no intervalo de x a y
    printf("Números primos entre %d e %d:\n", x, y);
    for (int i = x; i <= y; i++) {
        if (ehPrimo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
