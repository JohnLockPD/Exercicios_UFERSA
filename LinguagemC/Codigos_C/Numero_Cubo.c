#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    float numero, cubo;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Calcula o cubo do número
    cubo = numero * numero * numero;

    // Exibe o cubo do número
    printf("O cubo de %.2f é: %.2f\n", numero, cubo);

    return 0;
}
