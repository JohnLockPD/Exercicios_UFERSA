#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float temperatura_celsius, temperatura_fahrenheit;

    // Solicita ao usu�rio que insira a temperatura em Celsius
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperatura_celsius);

    // Converte a temperatura de Celsius para Fahrenheit
    temperatura_fahrenheit = (temperatura_celsius * 1.8) + 32;

    // Apresenta a temperatura convertida em Fahrenheit
    printf("A temperatura em Fahrenheit �: %.2f\n", temperatura_fahrenheit);

    return 0;
}
