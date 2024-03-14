# Atividade I: Trabalho de aquecimento 31/03/2024
 O Jogo da Vida é um autômato celular que evolui de acordo com regras simples, mas gera padrões complexos. Ele é representado por uma matriz 2D de células, cada uma podendo estar viva ou morta.

# Jogo da Vida - Matriz em C++

## Descrição

Este script em C++ implementa uma classe `Matrix` que representa uma matriz bidimensional. A classe oferece funcionalidades para ler de um arquivo, imprimir o histórico da matriz, adicionar ao histórico e aplicar as regras do Jogo da Vida de Conway.

O Jogo da Vida é um autômato celular que segue regras simples e produz padrões complexos a partir de interações entre células vizinhas.

## Funções Principais

### `readFromFile(const std::string& fileName)`

Lê as dimensões e os elementos da matriz de um arquivo.

### `printEntireHistory(const std::string& fileName)`

Imprime todo o histórico da matriz a partir de um arquivo.

### `printHistory(const std::string& fileName)`

Adiciona a configuração atual da matriz ao histórico em um arquivo.

### `JogoDaVida()`

Aplica as regras do Jogo da Vida de Conway à matriz.

## Uso

1. Compile e execute o script em um ambiente C++.
2. Utilize as funções da classe `Matrix` para ler de arquivos, imprimir o histórico e aplicar o Jogo da Vida.

```cpp
int main() {
    // Exemplo de uso
    Matrix matrix;
    matrix.readFromFile("input.txt");
    matrix.JogoDaVida();
    matrix.printHistory("output.txt");

    return 0;
}
