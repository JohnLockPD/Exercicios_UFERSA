Algoritmo "Verifica_Intervalo"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Verifica se um n�mero est� no intervalo entre 100 e 200
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero: inteiro

Inicio
    // Solicitando um n�mero ao usu�rio
    escreval("Digite um n�mero:")
    leia(Numero)

    // Verificando se o n�mero est� no intervalo entre 100 e 200
    se (Numero >= 100 e Numero <= 200) ent�o
        escreval("O n�mero ", Numero, " est� no intervalo entre 100 e 200.")
    senao
        escreval("O n�mero ", Numero, " n�o est� no intervalo entre 100 e 200.")
    fimse

Fimalgoritmo