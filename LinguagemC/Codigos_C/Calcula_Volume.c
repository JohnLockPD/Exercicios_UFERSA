#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    float comprimento, largura, altura, volume;

    // Solicita ao usuário que insira o comprimento, a largura e a altura da caixa
    printf("Digite o comprimento da caixa: ");
    scanf("%f", &comprimento);
    printf("Digite a largura da caixa: ");
    scanf("%f", &largura);
    printf("Digite a altura da caixa: ");
    scanf("%f", &altura);

    // Calcula o volume da caixa retangular
    volume = comprimento * largura * altura;

    // Exibe o resultado do volume
    printf("O volume da caixa retangular é: %.2f\n", volume);

    return 0;
}
