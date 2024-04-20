Algoritmo "Analise_Numeros"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Analisa números inteiros até que seja digitado o 0, calculando média, quantidade de pares e ímpares
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Soma, QuantidadeNumeros, QuantidadePares, QuantidadeImpares: inteiro
    Media: real

Inicio
    // Inicializando as variáveis
    Soma <- 0
    QuantidadeNumeros <- 0
    QuantidadePares <- 0
    QuantidadeImpares <- 0

    // Solicitando números inteiros até que seja digitado o 0
    repita
        escreval("Digite um número inteiro (digite 0 para encerrar):")
        leia(Numero)

        // Verificando se o número é diferente de zero
        se (Numero <> 0) então
            // Atualizando a soma dos números
            Soma <- Soma + Numero

            // Atualizando a quantidade de números
            QuantidadeNumeros <- QuantidadeNumeros + 1

            // Verificando se o número é par ou ímpar
            se (Numero % 2 = 0) então
                QuantidadePares <- QuantidadePares + 1
            senao
                QuantidadeImpares <- QuantidadeImpares + 1
            fimse
        fimse
    ate (Numero = 0)

    // Calculando a média dos números
    se (QuantidadeNumeros > 0) então
        Media <- Soma / QuantidadeNumeros
    senao
        Media <- 0
    fimse

    // Exibindo os resultados
    escreval("Número de valores lidos: ", QuantidadeNumeros)
    escreval("Média aritmética: ", Media)
    escreval("Quantidade de números pares: ", QuantidadePares)
    escreval("Quantidade de números ímpares: ", QuantidadeImpares)

Fimalgoritmo