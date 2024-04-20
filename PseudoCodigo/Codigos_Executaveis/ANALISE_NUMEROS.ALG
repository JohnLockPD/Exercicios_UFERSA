Algoritmo "Analise_Numeros"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Analisa números inteiros até que seja digitado um valor negativo, informando média, maior e menor valor
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Soma, Contador, Maior, Menor: inteiro
    Media: real

Inicio
    // Inicializando as variáveis
    Soma <- 0
    Contador <- 0
    Maior <- -1000000 // Valor inicial para garantir que qualquer número digitado será maior que este
    Menor <- 1000000  // Valor inicial para garantir que qualquer número digitado será menor que este

    // Solicitando números inteiros até que seja digitado um valor negativo
    repita
        escreval("Digite um número inteiro (digite um número negativo para encerrar):")
        leia(Numero)

        // Verificando se o número é negativo para encerrar a entrada de dados
        se (Numero >= 0) então
            // Atualizando a soma dos números
            Soma <- Soma + Numero

            // Atualizando o maior número
            se (Numero > Maior) então
                Maior <- Numero
            fimse

            // Atualizando o menor número
            se (Numero < Menor) então
                Menor <- Numero
            fimse

            // Atualizando o contador de números
            Contador <- Contador + 1
        fimse
    ate (Numero < 0)

    // Calculando a média dos números
    se (Contador > 0) então
        Media <- Soma / Contador
    senao
        Media <- 0
    fimse

    // Exibindo os resultados
    escreval("A média dos números é: ", Media)
    escreval("O maior número digitado é: ", Maior)
    escreval("O menor número digitado é: ", Menor)

Fimalgoritmo