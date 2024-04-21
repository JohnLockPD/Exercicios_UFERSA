#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float temperatura_fahrenheit, temperatura_celsius;

    // Solicita ao usu�rio que insira a temperatura em Fahrenheit
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperatura_fahrenheit);

    // Converte a temperatura de Fahrenheit para Celsius
    temperatura_celsius = (temperatura_fahrenheit - 32) / 1.8;

    // Apresenta a temperatura convertida em Celsius
    printf("A temperatura em Celsius �: %.2f\n", temperatura_celsius);

    return 0;
}
