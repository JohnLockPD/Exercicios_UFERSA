Algoritmo "Maior_Numero"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Verifica qual n�mero � o maior entre dois valores inteiros diferentes
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero1, Numero2: inteiro

Inicio
    // Solicitando dois valores inteiros diferentes
    repita
        escreval("Digite o primeiro n�mero inteiro:")
        leia(Numero1)
        escreval("Digite o segundo n�mero inteiro:")
        leia(Numero2)

        // Verificando se os n�meros s�o iguais
        se (Numero1 = Numero2) ent�o
            escreval("Os n�meros digitados s�o iguais. Por favor, digite dois n�meros diferentes.")
        fimse
    ate (Numero1 <> Numero2)

    // Verificando qual n�mero � maior
    se (Numero1 > Numero2) ent�o
        escreval("O maior n�mero �: ", Numero1)
    senao
        escreval("O maior n�mero �: ", Numero2)
    fimse

Fimalgoritmo