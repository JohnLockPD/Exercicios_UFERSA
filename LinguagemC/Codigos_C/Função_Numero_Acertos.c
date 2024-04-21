#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa calcula o n�mero de acertos de cada aluno em uma prova com base no gabarito e nos cart�es de respostas dos alunos.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para calcular o n�mero de acertos de um aluno
int calcular_acertos(char gabarito[], char respostas_aluno[]) {
    int acertos = 0;

    // Compara cada resposta do aluno com o gabarito e conta os acertos
    for (int i = 0; i < 30; i++) {
        if (respostas_aluno[i] == gabarito[i]) {
            acertos++;
        }
    }

    return acertos;
}

// Fun��o principal
int main() {
    int num_alunos;

    // Solicita ao usu�rio que insira o n�mero de alunos da turma
    printf("Digite o n�mero de alunos da turma: ");
    scanf("%d", &num_alunos);

    // Declara os vetores para armazenar o gabarito e as respostas dos alunos
    char gabarito[30];
    char respostas_alunos[num_alunos][30]; // Matriz para armazenar as respostas de cada aluno

    // Solicita ao usu�rio que insira o gabarito
    printf("Digite o gabarito da prova (30 caracteres, por exemplo: ABCDEABCDEABCDEABCDEABCDE): ");
    scanf("%s", gabarito);

    // Solicita ao usu�rio que insira as respostas de cada aluno
    for (int i = 0; i < num_alunos; i++) {
        printf("Digite as respostas do aluno %d (30 caracteres, por exemplo: ABCDEABCDEABCDEABCDEABCDE): ", i + 1);
        scanf("%s", respostas_alunos[i]);
    }

    // Calcula e imprime o n�mero de acertos de cada aluno
    printf("\nN�mero de acertos de cada aluno:\n");
    for (int i = 0; i < num_alunos; i++) {
        int acertos = calcular_acertos(gabarito, respostas_alunos[i]);
        printf("Aluno %d: %d acertos\n", i + 1, acertos);
    }

    return 0;
}
