#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Esta função retorna 1 se o número for positivo, 0 se for nulo e -1 se for negativo.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para verificar o sinal de um número
int verificar_sinal(int numero) {
    if (numero > 0) {
        return 1; // número positivo
    } else if (numero == 0) {
        return 0; // número nulo
    } else {
        return -1; // número negativo
    }
}

// Função principal
int main() {
    int numero;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Chama a função para verificar o sinal do número e exibe o resultado
    int resultado = verificar_sinal(numero);
    printf("O número %d é %s\n", numero, resultado == 1 ? "positivo" : (resultado == 0 ? "nulo" : "negativo"));

    return 0;
}
