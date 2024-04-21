#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa preenche os elementos de um vetor at� que o usu�rio digite o valor zero e depois verifica se um n�mero est� presente no vetor, imprimindo sua posi��o.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para preencher os elementos de um vetor at� que seja digitado o valor zero
int preencher_vetor(int vetor[]) {
    int tamanho = 0;
    int valor;

    // Loop para preencher o vetor at� que seja digitado o valor zero
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

// Fun��o para verificar se um n�mero est� presente no vetor e imprimir sua posi��o
void verificar_e_imprimir(int vetor[], int tamanho, int numero) {
    int encontrado = 0;

    // Loop para verificar se o n�mero est� presente no vetor
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            printf("O n�mero %d est� presente na posi��o %d do vetor.\n", numero, i);
            encontrado = 1;
        }
    }

    // Se o n�mero n�o foi encontrado, imprime uma mensagem informando
    if (!encontrado) {
        printf("O n�mero %d n�o est� presente no vetor.\n", numero);
    }
}

// Fun��o principal
int main() {
    int vetor[100]; // Vetor com capacidade para at� 100 elementos
    int tamanho;

    // Preenche o vetor e obt�m o tamanho
    tamanho = preencher_vetor(vetor);

    // Solicita ao usu�rio que insira um n�mero para verificar no vetor
    int numero;
    printf("Digite um n�mero para verificar no vetor: ");
    scanf("%d", &numero);

    // Verifica se o n�mero est� presente no vetor e imprime sua posi��o
    verificar_e_imprimir(vetor, tamanho, numero);

    return 0;
}
