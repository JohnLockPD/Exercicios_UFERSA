#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descri��o: Este programa determina os n�meros que comp�em uma sequ�ncia e o n�mero de vezes que cada um deles ocorre na mesma.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Fun��o para determinar os n�meros e suas frequ�ncias na sequ�ncia
void determinar_frequencia(float sequencia[], int tamanho) {
    // Vari�veis para armazenar os n�meros e suas frequ�ncias
    float numeros[tamanho];
    int frequencias[tamanho];
    int total_numeros = 0;

    // Inicializa o vetor de frequ�ncias com zeros
    for (int i = 0; i < tamanho; i++) {
        frequencias[i] = 0;
    }

    // Percorre a sequ�ncia e contabiliza as frequ�ncias
    for (int i = 0; i < tamanho; i++) {
        // Verifica se o n�mero j� foi contabilizado
        int contabilizado = 0;
        for (int j = 0; j < total_numeros; j++) {
            if (sequencia[i] == numeros[j]) {
                frequencias[j]++;
                contabilizado = 1;
                break;
            }
        }
        // Se o n�mero ainda n�o foi contabilizado, adiciona-o ao vetor de n�meros
        if (!contabilizado) {
            numeros[total_numeros] = sequencia[i];
            frequencias[total_numeros]++;
            total_numeros++;
        }
    }

    // Imprime os n�meros e suas frequ�ncias
    printf("Sa�da:\n");
    for (int i = 0; i < total_numeros; i++) {
        printf("%.1f ocorre %d vez(es)\n", numeros[i], frequencias[i]);
    }
}

// Fun��o principal
int main() {
    int n;

    // Solicita ao usu�rio que insira o tamanho da sequ�ncia
    printf("Digite o tamanho da sequ�ncia: ");
    scanf("%d", &n);

    // Declara o vetor para armazenar a sequ�ncia
    float sequencia[n];

    // Solicita ao usu�rio que insira os elementos da sequ�ncia
    printf("Digite os elementos da sequ�ncia:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &sequencia[i]);
    }

    // Chama a fun��o para determinar os n�meros e suas frequ�ncias na sequ�ncia
    determinar_frequencia(sequencia, n);

    return 0;
}
