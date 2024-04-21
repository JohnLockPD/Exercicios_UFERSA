#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Esta função retorna a soma dos números inteiros existentes entre dois números inteiros.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para calcular a soma dos números inteiros existentes entre dois números
int soma_entre_numeros(int num1, int num2) {
    int soma = 0;
    int menor, maior;

    // Determina qual número é o menor e qual é o maior
    if (num1 < num2) {
        menor = num1;
        maior = num2;
    } else {
        menor = num2;
        maior = num1;
    }

    // Calcula a soma dos números inteiros entre o menor e o maior (excluindo-os)
    for (int i = menor + 1; i < maior; i++) {
        soma += i;
    }

    return soma;
}

// Função principal
int main() {
    int numero1, numero2;

    // Solicita ao usuário que insira dois números
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    // Chama a função para calcular a soma dos números inteiros entre os números digitados
    int resultado = soma_entre_numeros(numero1, numero2);

    // Exibe o resultado na tela
    printf("A soma dos números inteiros entre %d e %d é: %d\n", numero1, numero2, resultado);

    return 0;
}
