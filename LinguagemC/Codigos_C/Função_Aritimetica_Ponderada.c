#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Esta fun��o calcula a m�dia aritm�tica ou ponderada das notas de um aluno, dependendo da letra fornecida.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para calcular a m�dia aritm�tica das notas
float media_aritmetica(float p1, float p2, float p3) {
    return (p1 + p2 + p3) / 3.0;
}

// Fun��o para calcular a m�dia ponderada das notas
float media_ponderada(float p1, float p2, float p3) {
    return ((1 * p1) + (2 * p2) + (3 * p3)) / (1 + 2 + 3);
}

// Fun��o principal para teste
int main() {
    float nota1, nota2, nota3;
    char letra;

    // Solicita ao usu�rio que insira as notas e a letra correspondente
    printf("Digite as tr�s notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite 'A' para calcular a m�dia aritm�tica ou 'P' para calcular a m�dia ponderada: ");
    scanf(" %c", &letra);

    // Verifica a letra digitada e chama a fun��o correspondente
    if (letra == 'A' || letra == 'a') {
        float media = media_aritmetica(nota1, nota2, nota3);
        printf("A m�dia aritm�tica das notas �: %.2f\n", media);
    } else if (letra == 'P' || letra == 'p') {
        float media = media_ponderada(nota1, nota2, nota3);
        printf("A m�dia ponderada das notas �: %.2f\n", media);
    } else {
        printf("Letra inv�lida. Por favor, digite 'A' para m�dia aritm�tica ou 'P' para m�dia ponderada.\n");
    }

    return 0;
}
