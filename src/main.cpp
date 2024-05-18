#include <iostream>
#include <cstdlib> // Para srand e rand
#include <ctime>   // Para time
#include "sort.hpp"

int main() {
    srand(time(nullptr)); // Semente para gerar números aleatórios

    int n;
    std::cout << "Quantos elementos deseja gerar aleatoriamente para o vetor? ";
    std::cin >> n;

    int *arr = new int[n];

    // Gerando números aleatórios para o vetor
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100; // Números aleatórios entre 0 e 99
    }

    std::cout << "Vetor gerado aleatoriamente: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl << std::endl;

    // Ordenando o vetor usando Shell Sort
    shellSort(arr, n);

    std::cout << "Vetor ordenado: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr; // Liberando memória alocada para o vetor

    return 0;
}
