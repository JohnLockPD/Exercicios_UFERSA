#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float peso, altura, imc;

    // Solicita ao usu�rio que insira o peso e a altura
    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o resultado do IMC com duas casas decimais
    printf("O IMC �: %.2f\n", imc);

    return 0;
}
