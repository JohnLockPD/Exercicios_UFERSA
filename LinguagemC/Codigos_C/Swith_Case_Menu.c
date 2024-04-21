#include <stdio.h>

// Universidade Federal Rural Do Semi-�rido
// Departamento de Ci�ncia & Tecn�logia
// Disciplina: Algoritmo e programa��o
// Autor: Ea Oficial

// Fun��o principal
int main() {
    // Declara��o das vari�veis
    int codigo, quantidade;
    float preco_total = 0.0;

    // Exibe as informa��es do card�pio
    printf("C�DIGO DO ITEM\tESPECIFICA��O\tPRE�O UNIT�RIO\n");
    printf("100\t\tCachorro quente\t8.00\n");
    printf("101\t\tBauru\t\t9.00\n");
    printf("102\t\tX-Salada\t10.00\n");
    printf("103\t\tHamb�rguer\t12.00\n");
    printf("104\t\tRefrigerante (lata)\t3.00\n");

    // Solicita ao usu�rio que insira o c�digo do item desejado
    printf("Digite o c�digo do item desejado: ");
    scanf("%d", &codigo);

    // Solicita ao usu�rio que insira a quantidade do item desejado
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    // Calcula o pre�o total com base no c�digo do item
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
            printf("C�digo do item inv�lido!\n");
            return 1; // Retorna 1 para indicar um erro
    }

    // Exibe o valor total a ser pago
    printf("Valor a ser pago: R$ %.2f\n", preco_total);

    return 0;
}
