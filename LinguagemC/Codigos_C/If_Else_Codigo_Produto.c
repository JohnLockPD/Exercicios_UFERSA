#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int codigo;

    // Solicita ao usuário que insira o código do produto
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    // Verifica o código e mostra a classificação correspondente
    if (codigo == 1) {
        printf("Classificação: Alimento não-perecível\n");
    } else if (codigo >= 2 && codigo <= 4) {
        printf("Classificação: Alimento perecível\n");
    } else if (codigo == 5 || codigo == 6) {
        printf("Classificação: Vestuário\n");
    } else if (codigo == 7) {
        printf("Classificação: Higiene pessoal\n");
    } else if (codigo >= 8 && codigo <= 10) {
        printf("Classificação: Utensílios domésticos\n");
    } else {
        printf("Classificação: Inválido\n");
    }

    return 0;
}
