#include <stdio.h>

// Universidade: [Insira o nome da sua universidade aqui]
// Departamento: [Insira o departamento aqui]
// Disciplina: [Insira o nome da disciplina aqui]
// Descrição: Este programa determina os números que compõem uma sequência e o número de vezes que cada um deles ocorre na mesma.
// Autor(a): Ea Oficial
// Data atual: [Insira a data atual aqui]

// Função para determinar os números e suas frequências na sequência
void determinar_frequencia(float sequencia[], int tamanho) {
    // Variáveis para armazenar os números e suas frequências
    float numeros[tamanho];
    int frequencias[tamanho];
    int total_numeros = 0;

    // Inicializa o vetor de frequências com zeros
    for (int i = 0; i < tamanho; i++) {
        frequencias[i] = 0;
    }

    // Percorre a sequência e contabiliza as frequências
    for (int i = 0; i < tamanho; i++) {
        // Verifica se o número já foi contabilizado
        int contabilizado = 0;
        for (int j = 0; j < total_numeros; j++) {
            if (sequencia[i] == numeros[j]) {
                frequencias[j]++;
                contabilizado = 1;
                break;
            }
        }
        // Se o número ainda não foi contabilizado, adiciona-o ao vetor de números
        if (!contabilizado) {
            numeros[total_numeros] = sequencia[i];
            frequencias[total_numeros]++;
            total_numeros++;
        }
    }

    // Imprime os números e suas frequências
    printf("Saída:\n");
    for (int i = 0; i < total_numeros; i++) {
        printf("%.1f ocorre %d vez(es)\n", numeros[i], frequencias[i]);
    }
}

// Função principal
int main() {
    int n;

    // Solicita ao usuário que insira o tamanho da sequência
    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);

    // Declara o vetor para armazenar a sequência
    float sequencia[n];

    // Solicita ao usuário que insira os elementos da sequência
    printf("Digite os elementos da sequência:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &sequencia[i]);
    }

    // Chama a função para determinar os números e suas frequências na sequência
    determinar_frequencia(sequencia, n);

    return 0;
}
