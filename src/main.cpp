#include "matrix.hpp"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    Matrix myMatrix;
    int escolha;
    myMatrix.readFromFile("datasets/input.txt");
    ofstream("datasets/history.txt", std::ios::trunc).close();
    myMatrix.printHistory("datasets/history.txt");


    cout << "Escolha o numero de itera��es: ";
    cin >> escolha;

    for (int i = 0; i < escolha; ++i) {
        myMatrix.JogoDaVida();
        myMatrix.printHistory("datasets/history.txt");
    }

    myMatrix.printEntireHistory("datasets/history.txt");

    return 0;
}
