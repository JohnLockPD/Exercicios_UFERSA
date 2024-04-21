#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa verifica se o número digitado pelo usuário é um palíndromo.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para verificar se o número é palíndromo
int verificar_palindromo(int numero) {
    int original = numero;
    int reverso = 0;

    // Inverte o número
    while (numero != 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero = numero / 10;
    }

    // Verifica se o número original é igual ao número invertido
    if (original == reverso) {
        return 1; // É palíndromo
    } else {
        return 0; // Não é palíndromo
    }
}

// Função principal
int main() {
    int numero;

    // Solicita ao usuário que insira o número
    printf("Digite um número de 4 dígitos para verificar se é um palíndromo: ");
    scanf("%d", &numero);

    // Verifica se o número possui 4 dígitos
    if (numero < 1000 || numero > 9999) {
        printf("O número digitado não possui 4 dígitos.\n");
        return 0;
    }

    // Chama a função para verificar se o número é palíndromo
    if (verificar_palindromo(numero)) {
        printf("O número %d é um palíndromo.\n", numero);
    } else {
        printf("O número %d não é um palíndromo.\n", numero);
    }

    return 0;
}
