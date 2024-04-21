#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float comprimento, largura, altura, volume;

    // Solicita ao usu�rio que insira o comprimento, a largura e a altura da caixa
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da caixa: ");
    scanf("%f", &largura);
    printf("Digite a altura da caixa: ");
    scanf("%f", &altura);

    // Calcula o volume da caixa retangular
    volume = comprimento * largura * altura;

    // Exibe o resultado do volume
    printf("O volume da caixa retangular �: %.2f\n", volume);

    return 0;
}
