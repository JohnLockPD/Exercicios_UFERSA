Algoritmo "Media_Peso_Grupo"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Calcula a m�dia do peso de um grupo de 50 pessoas
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Peso, Soma: real
    Contador: inteiro

Inicio
    // Inicializando a vari�vel de soma
    Soma <- 0

    // Solicitando e somando os pesos das 50 pessoas
    para Contador de 1 ate 50 faca
        escreval("Digite o peso da pessoa ", Contador, ":")
        leia(Peso)
        Soma <- Soma + Peso
    fimpara

    // Calculando a m�dia do peso do grupo
    escreval("A m�dia do peso do grupo �: ", Soma / 50)

Fimalgoritmo