#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    float peso, altura, imc;

    // Solicita ao usuário que insira o peso e a altura
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o resultado do IMC com duas casas decimais
    printf("O IMC é: %.2f\n", imc);

    return 0;
}
