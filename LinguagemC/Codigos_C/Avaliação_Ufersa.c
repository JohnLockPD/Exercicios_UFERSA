#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

int main() {
    // Declaração das variáveis
    float nota1, nota2, nota3, MP, MF, AF;

    // Solicita e lê as notas das avaliações
    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira avaliação: ");
    scanf("%f", &nota3);

    // Calcula a Média Parcial (MP)
    MP = (nota1 + nota2 + nota3) / 3.0;

    // Exibe a Média Parcial (MP)
    printf("Média Parcial (MP): %.2f\n", MP);

    // Verifica se o aluno será aprovado ou submetido à Avaliação Final (AF)
    if (MP >= 7.0) {
        printf("Aprovado na disciplina!\n");
    } else if (MP >= 3.5 && MP < 7.0) {
        printf("Submetido à Avaliação Final (AF).\n");

        // Solicita e lê a nota da Avaliação Final (AF)
        printf("Digite a nota da Avaliação Final (AF): ");
        scanf("%f", &AF);

        // Calcula a Média Final (MF)
        MF = ((6 * MP) + (4 * AF)) / 10.0;

        // Exibe a Média Final (MF) e a situação final
        printf("Média Final (MF): %.2f\n", MF);
        if (MF >= 5.0) {
            printf("Aprovado na disciplina após a Avaliação Final (AF)!\n");
        } else {
            printf("Reprovado na disciplina após a Avaliação Final (AF).\n");
        }
    } else {
        printf("Reprovado na disciplina.\n");
    }

    return 0;
}
