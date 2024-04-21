#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Esta função calcula a média aritmética ou ponderada das notas de um aluno, dependendo da letra fornecida.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para calcular a média aritmética das notas
float media_aritmetica(float p1, float p2, float p3) {
    return (p1 + p2 + p3) / 3.0;
}

// Função para calcular a média ponderada das notas
float media_ponderada(float p1, float p2, float p3) {
    return ((1 * p1) + (2 * p2) + (3 * p3)) / (1 + 2 + 3);
}

// Função principal para teste
int main() {
    float nota1, nota2, nota3;
    char letra;

    // Solicita ao usuário que insira as notas e a letra correspondente
    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite 'A' para calcular a média aritmética ou 'P' para calcular a média ponderada: ");
    scanf(" %c", &letra);

    // Verifica a letra digitada e chama a função correspondente
    if (letra == 'A' || letra == 'a') {
        float media = media_aritmetica(nota1, nota2, nota3);
        printf("A média aritmética das notas é: %.2f\n", media);
    } else if (letra == 'P' || letra == 'p') {
        float media = media_ponderada(nota1, nota2, nota3);
        printf("A média ponderada das notas é: %.2f\n", media);
    } else {
        printf("Letra inválida. Por favor, digite 'A' para média aritmética ou 'P' para média ponderada.\n");
    }

    return 0;
}
