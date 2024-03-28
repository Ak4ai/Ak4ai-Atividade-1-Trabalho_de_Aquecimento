#include "matrix.hpp"
#include <iostream>
#include <fstream>

Matrix::Matrix() : data(nullptr), rows(0), columns(0) {}

Matrix::~Matrix() {
    for (int i = 0; i < rows; ++i) {
        delete[] data[i];
    }
    delete[] data;
    data = nullptr;
}

void Matrix::readFromFile(const std::string& fileName) {
    std::ifstream file(fileName);

    if (file.is_open()) {
        file >> rows >> columns;

        // Allocate memory for the matrix
        data = new int* [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[columns];
            for (int j = 0; j < columns; ++j) {
                file >> data[i][j];
            }
        }

        file.close();
    }
    else {
        std::cerr << "Error opening file: " << fileName << std::endl;
    }
}

void Matrix::printEntireHistory(const std::string& fileName) {
    std::ifstream inFile(fileName);

    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }

        inFile.close();
    }
    else {
        std::cerr << "Erro ao abrir o arquivo: " << fileName << std::endl;
    }
}

void Matrix::printHistory(const std::string& fileName) {
    std::ofstream outFile(fileName, std::ios::app); // Abre o arquivo para escrita

    if (outFile.is_open()) {
            outFile << rows << " " << columns << std::endl; // Grava as dimens�es no arquivo

            for (int i = 0; i < rows; ++i) {
                for (int j = 0; j < columns; ++j) {
                    outFile << data[i][j] << " ";  // Grava no arquivo
                }
                outFile << std::endl;  // Pula para a pr�xima linha no arquivo
            }

        outFile.close(); // Fecha o arquivo
    }
    else {
        std::cerr << "Erro ao abrir o arquivo: " << fileName << std::endl;
    }
}


// Adicione a fun��o JogoDaVida na classe Matrix
void Matrix::JogoDaVida() {
    // Criar uma c�pia tempor�ria da matriz para as altera��es
    int** tempData = new int* [rows];
    for (int i = 0; i < rows; ++i) {
        tempData[i] = new int[columns];
    }

    // Calcular a pr�xima gera��o com base nas regras do Jogo da Vida
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            int aliveNeighbors = 0;

            // Contar o n�mero de vizinhos vivos
            for (int k = -1; k < 2; ++k) {
                for (int l = -1; l < 2; ++l) {
                    if (i + k >= 0 && i + k < rows && j + l >= 0 && j + l < columns) {
                        aliveNeighbors += data[i + k][j + l];
                    }
                }
            }

            // Ajustar o n�mero de vizinhos, pois a c�lula atual foi contada
            aliveNeighbors -= data[i][j];

            // Aplicar as regras do Jogo da Vida
            if (data[i][j] == 1) {
                if (aliveNeighbors < 2 || aliveNeighbors > 3) {
                    tempData[i][j] = 0; // Solid�o ou superpopula��o
                }
                else {
                    tempData[i][j] = 1; // Sobrevive
                }
            }
            else {
                if (aliveNeighbors == 3) {
                    tempData[i][j] = 1; // Reprodu��o
                }
                else {
                    tempData[i][j] = 0; // Permanece morta
                }
            }
        }
    }

    // Atualizar a matriz original com a nova gera��o
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            data[i][j] = tempData[i][j];
        }
    }

    // Liberar a mem�ria da matriz tempor�ria
    for (int i = 0; i < rows; ++i) {
        delete[] tempData[i];
    }
    delete[] tempData;
}
void Matrix::run(){
    int escolha;
    Matrix myMatrix;
    myMatrix.readFromFile("datasets/input.txt");
    std::ofstream("datasets/history.txt", std::ios::trunc).close();
    myMatrix.printHistory("datasets/history.txt");


    std::cout << "Escolha o numero de itera��es: ";
    std::cin >> escolha;

    for (int i = 0; i < escolha; ++i) {
        myMatrix.JogoDaVida();
        myMatrix.printHistory("datasets/history.txt");
    }

    myMatrix.printEntireHistory("datasets/history.txt");

}