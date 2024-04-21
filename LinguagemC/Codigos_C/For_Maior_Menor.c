#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

int main() {
    int idade;

    // Loop para repetir o procedimento 10 vezes
    for (int i = 0; i < 10; i++) {
        // Solicita e lê a idade do usuário
        printf("Digite sua idade: ");
        scanf("%d", &idade);

        // Verifica se a idade é maior ou igual a 18
        if (idade >= 18) {
            printf("Você é maior de idade.\n");
        } else {
            printf("Você é menor de idade.\n");
        }
    }

    return 0;
}
