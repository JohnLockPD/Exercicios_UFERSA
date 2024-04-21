#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

int main() {
    // Loop para iterar sobre os 10 alunos
    for (int i = 1; i <= 10; i++) {
        printf("Aluno %d:\n", i);
        
        // Solicita e l� as notas das tr�s provas
        float nota1, nota2, nota3;
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);
        printf("Digite a nota da terceira prova: ");
        scanf("%f", &nota3);

        // Calcula a m�dia aritm�tica
        float media = (nota1 + nota2 + nota3) / 3.0;

        // Exibe a m�dia aritm�tica
        printf("Media: %.2f\n", media);

        // Determina o conceito com base na m�dia
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
