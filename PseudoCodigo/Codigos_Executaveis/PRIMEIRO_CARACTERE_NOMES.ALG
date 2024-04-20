Algoritmo "Primeiro_Caractere_Nomes"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Imprime o primeiro caractere de 20 nomes
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Nome: caractere[20]
    Contador: inteiro

Inicio
    // Solicitando e armazenando 20 nomes
    para Contador de 1 ate 20 faca
        escreval("Digite o nome ", Contador, ":")
        leia(Nome[Contador])
    fimpara

    // Imprimindo o primeiro caractere de cada nome
    para Contador de 1 ate 20 faca
        escreval("O primeiro caractere do nome ", Nome[Contador], " é: ", Nome[Contador][1])
    fimpara

Fimalgoritmo