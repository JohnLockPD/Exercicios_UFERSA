#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

int main() {
    // Declara��o das vari�veis
    float nota1, nota2, nota3, MP, MF, AF;

    // Solicita e l� as notas das avalia��es
    printf("Digite a nota da primeira avalia��o: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda avalia��o: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira avalia��o: ");
    scanf("%f", &nota3);

    // Calcula a M�dia Parcial (MP)
    MP = (nota1 + nota2 + nota3) / 3.0;

    // Exibe a M�dia Parcial (MP)
    printf("M�dia Parcial (MP): %.2f\n", MP);

    // Verifica se o aluno ser� aprovado ou submetido � Avalia��o Final (AF)
    if (MP >= 7.0) {
        printf("Aprovado na disciplina!\n");
    } else if (MP >= 3.5 && MP < 7.0) {
        printf("Submetido � Avalia��o Final (AF).\n");

        // Solicita e l� a nota da Avalia��o Final (AF)
        printf("Digite a nota da Avalia��o Final (AF): ");
        scanf("%f", &AF);

        // Calcula a M�dia Final (MF)
        MF = ((6 * MP) + (4 * AF)) / 10.0;

        // Exibe a M�dia Final (MF) e a situa��o final
        printf("M�dia Final (MF): %.2f\n", MF);
        if (MF >= 5.0) {
            printf("Aprovado na disciplina ap�s a Avalia��o Final (AF)!\n");
        } else {
            printf("Reprovado na disciplina ap�s a Avalia��o Final (AF).\n");
        }
    } else {
        printf("Reprovado na disciplina.\n");
    }

    return 0;
}
