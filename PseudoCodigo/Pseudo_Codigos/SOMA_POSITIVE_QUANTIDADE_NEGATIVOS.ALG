Algoritmo "Soma_Positive_Quantidade_Negativos"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Calcula a soma dos n�meros positivos e a quantidade de valores negativos entre 20 n�meros
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, SomaPositivos, QuantidadeNegativos, Contador: inteiro

Inicio
    // Inicializando as vari�veis
    SomaPositivos <- 0
    QuantidadeNegativos <- 0

    // Solicitando e analisando 20 n�meros
    para Contador de 1 ate 20 faca
        escreval("Digite o n�mero ", Contador, ":")
        leia(Numero)

        // Verificando se o n�mero � positivo ou negativo
        se (Numero > 0) ent�o
            SomaPositivos <- SomaPositivos + Numero
        senao
            se (Numero < 0) ent�o
                QuantidadeNegativos <- QuantidadeNegativos + 1
            fimse
        fimse
    fimpara

    // Exibindo os resultados
    escreval("A soma dos n�meros positivos �: ", SomaPositivos)
    escreval("A quantidade de valores negativos �: ", QuantidadeNegativos)

Fimalgoritmo