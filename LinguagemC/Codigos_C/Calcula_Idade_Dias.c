#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int idade;
    long int dias_vividos; // Usando 'long int' para suportar uma grande quantidade de dias

    // Solicita ao usuário que insira sua idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Calcula aproximadamente quantos dias o usuário já viveu
    dias_vividos = idade * 365; // Assumindo que um ano tem 365 dias

    // Exibe o resultado aproximado
    printf("Você aproximadamente viveu cerca de %ld dias.\n", dias_vividos);

    return 0;
}
