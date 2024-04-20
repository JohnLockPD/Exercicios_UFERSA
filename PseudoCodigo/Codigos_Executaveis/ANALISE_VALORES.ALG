Algoritmo "Analise_Valores"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Calcula a média aritmética, quantidade de valores positivos e negativos, e percentual de positivos e negativos
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Soma, Quantidade, QuantidadePositivos, QuantidadeNegativos: inteiro
    Media, PercentualPositivos, PercentualNegativos: real

Inicio
    // Inicializando as variáveis
    Soma <- 0
    Quantidade <- 0
    QuantidadePositivos <- 0
    QuantidadeNegativos <- 0

    // Solicitando e analisando os valores
    repita
        escreval("Digite um número (digite 0 para encerrar):")
        leia(Numero)

        // Verificando se o número é diferente de zero
        se (Numero <> 0) então
            // Atualizando a soma e a quantidade de números
            Soma <- Soma + Numero
            Quantidade <- Quantidade + 1

            // Verificando se o número é positivo ou negativo
            se (Numero > 0) então
                QuantidadePositivos <- QuantidadePositivos + 1
            senao
                se (Numero < 0) então
                    QuantidadeNegativos <- QuantidadeNegativos + 1
                fimse
            fimse
        fimse
    ate (Numero = 0)

    // Calculando a média aritmética
    se (Quantidade > 0) então
        Media <- Soma / Quantidade
    senao
        Media <- 0
    fimse

    // Calculando o percentual de valores positivos e negativos
    PercentualPositivos <- (QuantidadePositivos / Quantidade) * 100
    PercentualNegativos <- (QuantidadeNegativos / Quantidade) * 100

    // Exibindo os resultados
    escreval("A média aritmética dos valores é: ", Media)
    escreval("Quantidade de valores positivos: ", QuantidadePositivos, " (", PercentualPositivos, "%)")
    escreval("Quantidade de valores negativos: ", QuantidadeNegativos, " (", PercentualNegativos, "%)")

Fimalgoritmo