Algoritmo "Analise_Numeros"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Analisa n�meros inteiros at� que seja digitado o 0, calculando m�dia, quantidade de pares e �mpares
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Soma, QuantidadeNumeros, QuantidadePares, QuantidadeImpares: inteiro
    Media: real

Inicio
    // Inicializando as vari�veis
    Soma <- 0
    QuantidadeNumeros <- 0
    QuantidadePares <- 0
    QuantidadeImpares <- 0

    // Solicitando n�meros inteiros at� que seja digitado o 0
    repita
        escreval("Digite um n�mero inteiro (digite 0 para encerrar):")
        leia(Numero)

        // Verificando se o n�mero � diferente de zero
        se (Numero <> 0) ent�o
            // Atualizando a soma dos n�meros
            Soma <- Soma + Numero

            // Atualizando a quantidade de n�meros
            QuantidadeNumeros <- QuantidadeNumeros + 1

            // Verificando se o n�mero � par ou �mpar
            se (Numero % 2 = 0) ent�o
                QuantidadePares <- QuantidadePares + 1
            senao
                QuantidadeImpares <- QuantidadeImpares + 1
            fimse
        fimse
    ate (Numero = 0)

    // Calculando a m�dia dos n�meros
    se (QuantidadeNumeros > 0) ent�o
        Media <- Soma / QuantidadeNumeros
    senao
        Media <- 0
    fimse

    // Exibindo os resultados
    escreval("N�mero de valores lidos: ", QuantidadeNumeros)
    escreval("M�dia aritm�tica: ", Media)
    escreval("Quantidade de n�meros pares: ", QuantidadePares)
    escreval("Quantidade de n�meros �mpares: ", QuantidadeImpares)

Fimalgoritmo