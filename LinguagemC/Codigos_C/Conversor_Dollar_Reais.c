#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    float cotacao_dolar, valor_real, valor_dolar;

    // Solicita ao usuário que insira a cotação do dólar atual
    printf("Digite a cotação do dólar atual: ");
    scanf("%f", &cotacao_dolar);

    // Solicita ao usuário que insira o valor em reais a ser convertido
    printf("Digite o valor em reais a ser convertido: ");
    scanf("%f", &valor_real);

    // Calcula o valor em dólar
    valor_dolar = valor_real / cotacao_dolar;

    // Exibe o resultado da conversão
    printf("O valor em dólar é: %.2f\n", valor_dolar);

    return 0;
}
