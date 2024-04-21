#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    float temperatura_celsius, temperatura_fahrenheit;

    // Solicita ao usuário que insira a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);

    // Converte a temperatura de Celsius para Fahrenheit
    temperatura_fahrenheit = (temperatura_celsius * 1.8) + 32;

    // Apresenta a temperatura convertida em Fahrenheit
    printf("A temperatura em Fahrenheit é: %.2f\n", temperatura_fahrenheit);

    return 0;
}
