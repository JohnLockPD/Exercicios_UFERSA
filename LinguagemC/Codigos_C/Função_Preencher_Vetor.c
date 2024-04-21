#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa preenche os elementos de um vetor até que o usuário digite o valor zero e depois verifica se um número está presente no vetor, imprimindo sua posição.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para preencher os elementos de um vetor até que seja digitado o valor zero
int preencher_vetor(int vetor[]) {
    int tamanho = 0;
    int valor;

    // Loop para preencher o vetor até que seja digitado o valor zero
    do {
        printf("Digite um valor (ou zero para sair): ");
        scanf("%d", &valor);
        if (valor != 0) {
            vetor[tamanho] = valor;
            tamanho++;
        }
    } while (valor != 0);

    return tamanho; // Retorna o tamanho do vetor preenchido
}

// Função para verificar se um número está presente no vetor e imprimir sua posição
void verificar_e_imprimir(int vetor[], int tamanho, int numero) {
    int encontrado = 0;

    // Loop para verificar se o número está presente no vetor
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            printf("O número %d está presente na posição %d do vetor.\n", numero, i);
            encontrado = 1;
        }
    }

    // Se o número não foi encontrado, imprime uma mensagem informando
    if (!encontrado) {
        printf("O número %d não está presente no vetor.\n", numero);
    }
}

// Função principal
int main() {
    int vetor[100]; // Vetor com capacidade para até 100 elementos
    int tamanho;

    // Preenche o vetor e obtém o tamanho
    tamanho = preencher_vetor(vetor);

    // Solicita ao usuário que insira um número para verificar no vetor
    int numero;
    printf("Digite um número para verificar no vetor: ");
    scanf("%d", &numero);

    // Verifica se o número está presente no vetor e imprime sua posição
    verificar_e_imprimir(vetor, tamanho, numero);

    return 0;
}
