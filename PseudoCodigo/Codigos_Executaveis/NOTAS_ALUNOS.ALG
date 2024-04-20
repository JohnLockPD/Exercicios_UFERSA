Algoritmo "Notas_Alunos"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Calcula a média de quatro provas para cinco alunos e imprime os resultados
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    Nome: vetor[5] de caractere[50]
    Nota1, Nota2, Nota3, Nota4: vetor[5] de real
    Media, MediaGeral: real
    Contador: inteiro

Inicio
    // Inicializando a média geral
    MediaGeral <- 0

    // Solicitando nome e notas de quatro provas para cinco alunos
    para Contador de 1 ate 5 faca
        escreval("Digite o nome do aluno ", Contador, ":")
        leia(Nome[Contador])
        escreval("Digite a nota 1 do aluno ", Nome[Contador], ":")
        leia(Nota1[Contador])
        escreval("Digite a nota 2 do aluno ", Nome[Contador], ":")
        leia(Nota2[Contador])
        escreval("Digite a nota 3 do aluno ", Nome[Contador], ":")
        leia(Nota3[Contador])
        escreval("Digite a nota 4 do aluno ", Nome[Contador], ":")
        leia(Nota4[Contador])
    fimpara

    // Calculando a média de cada aluno e a média geral da turma
    para Contador de 1 ate 5 faca
        Media <- (Nota1[Contador] + Nota2[Contador] + Nota3[Contador] + Nota4[Contador]) / 4
        MediaGeral <- MediaGeral + Media
        escreval("Aluno: ", Nome[Contador])
        escreval("Nota 1: ", Nota1[Contador])
        escreval("Nota 2: ", Nota2[Contador])
        escreval("Nota 3: ", Nota3[Contador])
        escreval("Nota 4: ", Nota4[Contador])
        escreval("Média: ", Media)
        escreval("-----------------------------")
    fimpara

    MediaGeral <- MediaGeral / 5

    // Exibindo a média geral da turma
    escreval("Média geral da turma: ", MediaGeral)

Fimalgoritmo