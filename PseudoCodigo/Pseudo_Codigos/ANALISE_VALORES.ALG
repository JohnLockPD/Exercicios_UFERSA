Algoritmo "Analise_Valores"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Calcula a m�dia aritm�tica, quantidade de valores positivos e negativos, e percentual de positivos e negativos
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Soma, Quantidade, QuantidadePositivos, QuantidadeNegativos: inteiro
    Media, PercentualPositivos, PercentualNegativos: real

Inicio
    // Inicializando as vari�veis
    Soma <- 0
    Quantidade <- 0
    QuantidadePositivos <- 0
    QuantidadeNegativos <- 0

    // Solicitando e analisando os valores
    repita
        escreval("Digite um n�mero (digite 0 para encerrar):")
        leia(Numero)

        // Verificando se o n�mero � diferente de zero
        se (Numero <> 0) ent�o
            // Atualizando a soma e a quantidade de n�meros
            Soma <- Soma + Numero
            Quantidade <- Quantidade + 1

            // Verificando se o n�mero � positivo ou negativo
            se (Numero > 0) ent�o
                QuantidadePositivos <- QuantidadePositivos + 1
            senao
                se (Numero < 0) ent�o
                    QuantidadeNegativos <- QuantidadeNegativos + 1
                fimse
            fimse
        fimse
    ate (Numero = 0)

    // Calculando a m�dia aritm�tica
    se (Quantidade > 0) ent�o
        Media <- Soma / Quantidade
    senao
        Media <- 0
    fimse

    // Calculando o percentual de valores positivos e negativos
    PercentualPositivos <- (QuantidadePositivos / Quantidade) * 100
    PercentualNegativos <- (QuantidadeNegativos / Quantidade) * 100

    // Exibindo os resultados
    escreval("A m�dia aritm�tica dos valores �: ", Media)
    escreval("Quantidade de valores positivos: ", QuantidadePositivos, " (", PercentualPositivos, "%)")
    escreval("Quantidade de valores negativos: ", QuantidadeNegativos, " (", PercentualNegativos, "%)")

Fimalgoritmo