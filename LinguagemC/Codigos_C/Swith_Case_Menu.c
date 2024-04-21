#include <stdio.h>

// Universidade Federal Rural Do Semi-Árido
// Departamento de Ciência & Tecnólogia
// Disciplina: Algoritmo e programação
// Autor: Ea Oficial

// Função principal
int main() {
    // Declaração das variáveis
    int codigo, quantidade;
    float preco_total = 0.0;

    // Exibe as informações do cardápio
    printf("CÓDIGO DO ITEM\tESPECIFICAÇÃO\tPREÇO UNITÁRIO\n");
    printf("100\t\tCachorro quente\t8.00\n");
    printf("101\t\tBauru\t\t9.00\n");
    printf("102\t\tX-Salada\t10.00\n");
    printf("103\t\tHambúrguer\t12.00\n");
    printf("104\t\tRefrigerante (lata)\t3.00\n");

    // Solicita ao usuário que insira o código do item desejado
    printf("Digite o código do item desejado: ");
    scanf("%d", &codigo);

    // Solicita ao usuário que insira a quantidade do item desejado
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    // Calcula o preço total com base no código do item
    switch (codigo) {
        case 100:
            preco_total = quantidade * 8.00;
            break;
        case 101:
            preco_total = quantidade * 9.00;
            break;
        case 102:
            preco_total = quantidade * 10.00;
            break;
        case 103:
            preco_total = quantidade * 12.00;
            break;
        case 104:
            preco_total = quantidade * 3.00;
            break;
        default:
            printf("Código do item inválido!\n");
            return 1; // Retorna 1 para indicar um erro
    }

    // Exibe o valor total a ser pago
    printf("Valor a ser pago: R$ %.2f\n", preco_total);

    return 0;
}
