Algoritmo "Converte_Fahrenheit_para_Celsius_com_Febre"
// Universidade Federal Rural do Semi-Árido - UFERSA
// Algoritmos & Programação
// Descrição   : Conversão de Temperatura de Fahrenheit para Celsius com Verificação de Febre
// Autor(a)    : Ea Oficial
// Data atual  : 20/04/2024

Var
    TemperaturaFahrenheit, TemperaturaCelsius: real

Inicio
    // Solicitando a temperatura em graus Fahrenheit
    escreval("Informe a temperatura em graus Fahrenheit:")
    leia(TemperaturaFahrenheit)

    // Convertendo a temperatura para graus Celsius
    TemperaturaCelsius <- 5 * ((TemperaturaFahrenheit - 32) / 9)

    // Exibindo a temperatura em graus Celsius
    escreval("A temperatura em graus Celsius é: ", TemperaturaCelsius)

    // Verificando se a temperatura é maior que 37.8 graus Celsius (febre)
    se (TemperaturaCelsius > 37.8) então
        escreval("Atenção: Você está com febre!")
    fimse

Fimalgoritmo