#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    int contador = 0;
    int valor, soma = 0, maior, menor;

    // Loop para ler 20 valores inteiros
    do {
        // Solicita ao usuário que insira um valor inteiro
        printf("Digite o %do valor inteiro: ", contador + 1);
        scanf("%d", &valor);

        // Atualiza a soma dos valores lidos
        soma += valor;

        // Se for o primeiro valor, define como maior e menor
        if (contador == 0) {
            maior = valor;
            menor = valor;
        } else {
            // Atualiza o maior e o menor valor, se necessário
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }

        contador++;
    } while (contador < 20);

    // Calcula a média dos valores lidos
    float media = (float) soma / 20;

    // Mostra o maior, o menor e a média dos valores lidos
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2f\n", media);

    return 0;
}
