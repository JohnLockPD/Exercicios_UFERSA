#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

int main() {
    // Loop para iterar sobre os 10 alunos
    for (int i = 1; i <= 10; i++) {
        printf("Aluno %d:\n", i);
        
        // Solicita e lê as notas das três provas
        float nota1, nota2, nota3;
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);
        printf("Digite a nota da terceira prova: ");
        scanf("%f", &nota3);

        // Calcula a média aritmética
        float media = (nota1 + nota2 + nota3) / 3.0;

        // Exibe a média aritmética
        printf("Media: %.2f\n", media);

        // Determina o conceito com base na média
        char conceito;
        if (media >= 9) {
            conceito = 'A';
        } else if (media >= 7) {
            conceito = 'B';
        } else if (media >= 6) {
            conceito = 'C';
        } else if (media >= 4) {
            conceito = 'D';
        } else {
            conceito = 'E';
        }

        // Exibe o conceito obtido
        printf("Conceito: %c\n", conceito);

        printf("\n");
    }

    return 0;
}
