#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    float nota1, nota2, nota3, media, nota_exame, media_final;

    // Solicita ao usu�rio que insira as notas das tr�s avalia��es
    printf("Digite a nota da primeira avalia��o: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda avalia��o: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira avalia��o: ");
    scanf("%f", &nota3);

    // Calcula a m�dia das tr�s avalia��es
    media = (nota1 + nota2 + nota3) / 3;

    // Verifica a situa��o do aluno com base na m�dia
    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 3 && media < 7) {
        printf("Voc� est� em exame\n");
        printf("Digite a nota do exame: ");
        scanf("%f", &nota_exame);
        media_final = (nota_exame + media) / 2;
        printf("M�dia final: %.2f\n", media_final);
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
