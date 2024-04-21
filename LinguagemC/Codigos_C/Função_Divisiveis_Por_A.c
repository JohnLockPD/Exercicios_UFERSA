#include <stdio.h>

// Função para calcular a soma dos números inteiros de b até c que sejam divisíveis por a
int soma_divisiveis_por_a(int a, int b, int c) {
    // Verifica se a é maior que 1
    if (a <= 1) {
        return -1; // Retorna -1 para indicar erro
    }

    int soma = 0;

    // Loop de b até c para verificar e somar os números divisíveis por a
    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }

    return soma;
}

// Função principal para teste
int main() {
    int a, b, c;

    // Solicita ao usuário que insira os valores de a, b e c
    printf("Digite o valor de a (a > 1): ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    // Chama a função para calcular a soma dos números inteiros de b até c que são divisíveis por a
    int resultado = soma_divisiveis_por_a(a, b, c);

    // Verifica se houve erro na entrada do valor de a
    if (resultado == -1) {
        printf("Erro: o valor de 'a' deve ser maior que 1.\n");
    } else {
        // Exibe o resultado na tela
        printf("A soma dos números inteiros de %d até %d que são divisíveis por %d é: %d\n", b, c, a, resultado);
    }

    return 0;
}
