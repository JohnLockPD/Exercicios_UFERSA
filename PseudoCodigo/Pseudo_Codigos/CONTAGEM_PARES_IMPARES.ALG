Algoritmo "Contagem_Pares_Impares"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Conta quantos n�meros inteiros s�o pares e quantos s�o �mpares dentre cem n�meros
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Contador, Pares, Impares: inteiro

Inicio
    // Inicializando as vari�veis de contagem
    Pares <- 0
    Impares <- 0

    // Solicitando e contando os n�meros inteiros
    para Contador de 1 ate 100 faca
        escreval("Digite o n�mero ", Contador, ":")
        leia(Numero)

        // Verificando se o n�mero � par ou �mpar e atualizando as contagens
        se (Numero % 2 = 0) ent�o
            Pares <- Pares + 1
        senao
            Impares <- Impares + 1
        fimse
    fimpara

    // Exibindo o resultado
    escreval("Quantidade de n�meros pares: ", Pares)
    escreval("Quantidade de n�meros �mpares: ", Impares)

Fimalgoritmo