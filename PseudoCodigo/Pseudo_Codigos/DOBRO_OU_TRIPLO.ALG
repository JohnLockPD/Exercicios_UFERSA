Algoritmo "Dobro_Ou_Triplo"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Verifica se um n�mero � positivo ou negativo e calcula o dobro ou triplo, respectivamente
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Resultado: real

Inicio
    // Solicitando o n�mero ao usu�rio
    escreval("Digite um n�mero:")
    leia(Numero)

    // Verificando se o n�mero � positivo
    se (Numero > 0) ent�o
        // Se for positivo, calcula o dobro do n�mero
        Resultado <- Numero * 2
        escreval("O dobro do n�mero �: ", Resultado)
    senao
        // Se for negativo, calcula o triplo do n�mero
        Resultado <- Numero * 3
        escreval("O triplo do n�mero �: ", Resultado)
    fimse

Fimalgoritmo
