#include <stdio.h>
#include <math.h> // Inclu�mos esta biblioteca para obter o valor de p

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float raio, area;
    const float PI = 3.14159; // Valor de pi

    // Solicita ao usu�rio que insira o raio da circunfer�ncia
    printf("Digite o raio da circunfer�ncia: ");
    scanf("%f", &raio);

    // Calcula a �rea da circunfer�ncia
    area = PI * pow(raio, 2);

    // Exibe o resultado da �rea
    printf("A �rea da circunfer�ncia �: %.2f\n", area);

    return 0;
}
