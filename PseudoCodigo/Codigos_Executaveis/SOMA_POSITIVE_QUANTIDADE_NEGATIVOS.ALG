Algoritmo "Soma_Positive_Quantidade_Negativos"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Calcula a soma dos números positivos e a quantidade de valores negativos entre 20 números
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, SomaPositivos, QuantidadeNegativos, Contador: inteiro

Inicio
    // Inicializando as variáveis
    SomaPositivos <- 0
    QuantidadeNegativos <- 0

    // Solicitando e analisando 20 números
    para Contador de 1 ate 20 faca
        escreval("Digite o número ", Contador, ":")
        leia(Numero)

        // Verificando se o número é positivo ou negativo
        se (Numero > 0) então
            SomaPositivos <- SomaPositivos + Numero
        senao
            se (Numero < 0) então
                QuantidadeNegativos <- QuantidadeNegativos + 1
            fimse
        fimse
    fimpara

    // Exibindo os resultados
    escreval("A soma dos números positivos é: ", SomaPositivos)
    escreval("A quantidade de valores negativos é: ", QuantidadeNegativos)

Fimalgoritmo