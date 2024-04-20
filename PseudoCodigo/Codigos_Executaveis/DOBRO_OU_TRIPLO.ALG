Algoritmo "Dobro_Ou_Triplo"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Verifica se um número é positivo ou negativo e calcula o dobro ou triplo, respectivamente
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Numero, Resultado: real

Inicio
    // Solicitando o número ao usuário
    escreval("Digite um número:")
    leia(Numero)

    // Verificando se o número é positivo
    se (Numero > 0) então
        // Se for positivo, calcula o dobro do número
        Resultado <- Numero * 2
        escreval("O dobro do número é: ", Resultado)
    senao
        // Se for negativo, calcula o triplo do número
        Resultado <- Numero * 3
        escreval("O triplo do número é: ", Resultado)
    fimse

Fimalgoritmo
