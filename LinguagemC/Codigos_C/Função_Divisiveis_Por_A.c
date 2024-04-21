#include <stdio.h>

// Fun��o para calcular a soma dos n�meros inteiros de b at� c que sejam divis�veis por a
int soma_divisiveis_por_a(int a, int b, int c) {
    // Verifica se a � maior que 1
    if (a <= 1) {
        return -1; // Retorna -1 para indicar erro
    }

    int soma = 0;

    // Loop de b at� c para verificar e somar os n�meros divis�veis por a
    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }

    return soma;
}

// Fun��o principal para teste
int main() {
    int a, b, c;

    // Solicita ao usu�rio que insira os valores de a, b e c
    printf("Digite o valor de a (a > 1): ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    // Chama a fun��o para calcular a soma dos n�meros inteiros de b at� c que s�o divis�veis por a
    int resultado = soma_divisiveis_por_a(a, b, c);

    // Verifica se houve erro na entrada do valor de a
    if (resultado == -1) {
        printf("Erro: o valor de 'a' deve ser maior que 1.\n");
    } else {
        // Exibe o resultado na tela
        printf("A soma dos n�meros inteiros de %d at� %d que s�o divis�veis por %d �: %d\n", b, c, a, resultado);
    }

    return 0;
}
