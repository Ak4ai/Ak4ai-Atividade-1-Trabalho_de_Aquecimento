#include <iostream>
#include "sort.hpp"

void shellSort(int arr[], int n) {
    int varreduras = 0;
    int gap = 1;
    while (gap <= n / 3) {
        gap = gap * 3 + 1; // Usando a fórmula 3^k - 1 / 2 para o gap
    }

    while (gap > 0) {
        std::cout << "Varredura " << ++varreduras << ": ";
        for (int i = gap; i < n; ++i) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }

        for (int i = 0; i < n; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        gap = (gap - 1) / 3; // Próximo gap pela fórmula inversa
    }
}
