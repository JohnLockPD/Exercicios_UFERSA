Algoritmo "Contagem_Pares_Impares"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Conta quantos números inteiros são pares e quantos são ímpares dentre cem números
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Contador, Pares, Impares: inteiro

Inicio
    // Inicializando as variáveis de contagem
    Pares <- 0
    Impares <- 0

    // Solicitando e contando os números inteiros
    para Contador de 1 ate 100 faca
        escreval("Digite o número ", Contador, ":")
        leia(Numero)

        // Verificando se o número é par ou ímpar e atualizando as contagens
        se (Numero % 2 = 0) então
            Pares <- Pares + 1
        senao
            Impares <- Impares + 1
        fimse
    fimpara

    // Exibindo o resultado
    escreval("Quantidade de números pares: ", Pares)
    escreval("Quantidade de números ímpares: ", Impares)

Fimalgoritmo