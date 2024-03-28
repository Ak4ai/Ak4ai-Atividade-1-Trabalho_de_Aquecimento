#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <string> // Adicione esta linha para incluir a biblioteca <string>

class Matrix {
private:
    int** data;
    int rows;
    int columns;

public:
    Matrix();
    ~Matrix();

    void readFromFile(const std::string& fileName);
    void printEntireHistory(const std::string& fileName);
    void printHistory(const std::string& fileName);
    void JogoDaVida();
    void run();
};

#endif // MATRIX_HPP
