Algoritmo "Media_Peso_Grupo"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Calcula a média do peso de um grupo de 50 pessoas
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Peso, Soma: real
    Contador: inteiro

Inicio
    // Inicializando a variável de soma
    Soma <- 0

    // Solicitando e somando os pesos das 50 pessoas
    para Contador de 1 ate 50 faca
        escreval("Digite o peso da pessoa ", Contador, ":")
        leia(Peso)
        Soma <- Soma + Peso
    fimpara

    // Calculando a média do peso do grupo
    escreval("A média do peso do grupo é: ", Soma / 50)

Fimalgoritmo