#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float numero, cubo;

    // Solicita ao usu�rio que insira um n�mero
    printf("Digite um n�mero: ");
    scanf("%f", &numero);

    // Calcula o cubo do n�mero
    cubo = numero * numero * numero;

    // Exibe o cubo do n�mero
    printf("O cubo de %.2f �: %.2f\n", numero, cubo);

    return 0;
}
