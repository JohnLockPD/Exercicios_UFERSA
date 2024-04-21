#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa l� os valores de um vetor inteiro de tamanho 10 e imprime a soma dos n�meros pares presentes neste vetor.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para calcular a soma dos n�meros pares presentes no vetor
int soma_numeros_pares(int vetor[], int tamanho) {
    int soma = 0;

    // Loop para percorrer o vetor e somar os n�meros pares
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            soma += vetor[i];
        }
    }

    return soma;
}

// Fun��o principal
int main() {
    int vetor[10]; // Vetor de tamanho 10
    int soma;

    // Solicita ao usu�rio que insira os valores do vetor
    printf("Digite os valores do vetor de tamanho 10:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Chama a fun��o para calcular a soma dos n�meros pares no vetor
    soma = soma_numeros_pares(vetor, 10);

    // Imprime a soma dos n�meros pares
    printf("A soma dos n�meros pares presentes no vetor �: %d\n", soma);

    return 0;
}
