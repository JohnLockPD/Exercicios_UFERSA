#include <stdio.h>
#include <math.h> // Incluímos esta biblioteca para obter o valor de p

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    float raio, area;
    const float PI = 3.14159; // Valor de pi

    // Solicita ao usuário que insira o raio da circunferência
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);

    // Calcula a área da circunferência
    area = PI * pow(raio, 2);

    // Exibe o resultado da área
    printf("A área da circunferência é: %.2f\n", area);

    return 0;
}
