Algoritmo "Calcula_Atribui_Resultado"
// Universidade Federal Rural do Semi-�rido - UFERSA
// Algoritmos & Programa��o
// Descri��o   : Verifica e realiza opera��es com dois valores inteiros
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    A, B, C: inteiro

Inicio
    // Solicitando dois valores inteiros A e B
    escreval("Digite o valor de A:")
    leia(A)
    escreval("Digite o valor de B:")
    leia(B)

    // Verificando se os valores s�o iguais
    se (A = B) ent�o
        // Se forem iguais, soma os dois valores e atribui o resultado a C
        C <- A + B
    senao
        // Se forem diferentes, multiplica A por B e atribui o resultado a C
        C <- A * B
    fimse

    // Exibindo o conte�do de C
    escreval("O resultado �: ", C)

Fimalgoritmo