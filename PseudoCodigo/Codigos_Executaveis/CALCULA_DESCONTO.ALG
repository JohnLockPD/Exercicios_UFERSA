Algoritmo "Calcula_Desconto"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Cálculo do Valor com Desconto de 10%
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    ValorProduto, ValorComDesconto: real

Inicio
    // Solicitando o valor do produto
    escreval("Informe o valor do produto:")
    leia(ValorProduto)

    // Calculando o valor com desconto de 10%
    ValorComDesconto <- ValorProduto - (ValorProduto * 0.10)

    // Exibindo o valor com desconto
    escreval("O valor com desconto de 10% é: ", ValorComDesconto)

Fimalgoritmo