Algoritmo "Analise_Numeros"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Analisa n�meros inteiros at� que seja digitado um valor negativo, informando m�dia, maior e menor valor
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Soma, Contador, Maior, Menor: inteiro
    Media: real

Inicio
    // Inicializando as vari�veis
    Soma <- 0
    Contador <- 0
    Maior <- -1000000 // Valor inicial para garantir que qualquer n�mero digitado ser� maior que este
    Menor <- 1000000  // Valor inicial para garantir que qualquer n�mero digitado ser� menor que este

    // Solicitando n�meros inteiros at� que seja digitado um valor negativo
    repita
        escreval("Digite um n�mero inteiro (digite um n�mero negativo para encerrar):")
        leia(Numero)

        // Verificando se o n�mero � negativo para encerrar a entrada de dados
        se (Numero >= 0) ent�o
            // Atualizando a soma dos n�meros
            Soma <- Soma + Numero

            // Atualizando o maior n�mero
            se (Numero > Maior) ent�o
                Maior <- Numero
            fimse

            // Atualizando o menor n�mero
            se (Numero < Menor) ent�o
                Menor <- Numero
            fimse

            // Atualizando o contador de n�meros
            Contador <- Contador + 1
        fimse
    ate (Numero < 0)

    // Calculando a m�dia dos n�meros
    se (Contador > 0) ent�o
        Media <- Soma / Contador
    senao
        Media <- 0
    fimse

    // Exibindo os resultados
    escreval("A m�dia dos n�meros �: ", Media)
    escreval("O maior n�mero digitado �: ", Maior)
    escreval("O menor n�mero digitado �: ", Menor)

Fimalgoritmo