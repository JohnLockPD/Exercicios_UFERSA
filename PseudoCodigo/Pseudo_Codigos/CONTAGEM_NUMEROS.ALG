Algoritmo "Contagem_Numeros"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Conta quantos n�meros entre 100 e 200 foram digitados at� ler o valor 0
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, ContadorNumeros: inteiro

Inicio
    // Inicializando o contador de n�meros
    ContadorNumeros <- 0

    // Solicitando e contando os n�meros entre 100 e 200
    repita
        escreval("Digite um n�mero (digite 0 para encerrar):")
        leia(Numero)

        // Verificando se o n�mero est� entre 100 e 200
        se (Numero >= 100) e (Numero <= 200) e (Numero <> 0) ent�o
            ContadorNumeros <- ContadorNumeros + 1
        fimse
    ate (Numero = 0)

    // Exibindo o resultado
    escreval("Foram digitados ", ContadorNumeros, " n�meros entre 100 e 200.")

Fimalgoritmo