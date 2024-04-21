#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função para determinar o maior número entre três números inteiros
int encontrar_maior(int num1, int num2, int num3) {
    int maior = num1;

    if (num2 > maior) {
        maior = num2;
    }
    if (num3 > maior) {
        maior = num3;
    }

    return maior;
}

// Função principal
int main() {
    int num1, num2, num3;

    // Solicita ao usuário que insira três números inteiros
    printf("Digite três números inteiros diferentes:\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Chama a função para determinar o maior número e o imprime
    int maior = encontrar_maior(num1, num2, num3);
    printf("O maior número é: %d\n", maior);

    return 0;
}
