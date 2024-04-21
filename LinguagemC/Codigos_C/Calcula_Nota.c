#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    float nota1, nota2, nota3, media, nota_exame, media_final;

    // Solicita ao usuário que insira as notas das três avaliações
    printf("Digite a nota da primeira avaliação: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda avaliação: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira avaliação: ");
    scanf("%f", &nota3);

    // Calcula a média das três avaliações
    media = (nota1 + nota2 + nota3) / 3;

    // Verifica a situação do aluno com base na média
    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 3 && media < 7) {
        printf("Você está em exame\n");
        printf("Digite a nota do exame: ");
        scanf("%f", &nota_exame);
        media_final = (nota_exame + media) / 2;
        printf("Média final: %.2f\n", media_final);
        if (media_final >= 5) {
            printf("Aprovado no exame\n");
        } else {
            printf("Reprovado no exame\n");
        }
    } else {
        printf("Reprovado sem direito a exame\n");
    }

    return 0;
}
