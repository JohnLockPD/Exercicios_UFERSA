Algoritmo "Contagem_Numeros_Positivos"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Conta quantos n�meros inteiros positivos foram digitados
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Contador: inteiro

Inicio
    // Inicializando o contador de n�meros
    Contador <- 0

    // Solicitando e contando os n�meros inteiros positivos
    repita
        escreval("Digite um n�mero inteiro positivo (ou digite 0 para sair):")
        leia(Numero)

        // Verificando se o n�mero � positivo e diferente de zero
        se (Numero > 0) ent�o
            Contador <- Contador + 1
        fimse
    ate (Numero = 0)

    // Exibindo o resultado
    escreval("Foram digitados ", Contador, " n�meros inteiros positivos.")

Fimalgoritmo