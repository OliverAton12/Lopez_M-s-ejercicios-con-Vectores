//fecha: 19/06/24
////Autor:Lopez Quiroz Wagner
//tema: Diseñe la función que encuentra el elemento menor de un vector de enteros.
#include <iostream>
using namespace std;

int encontrarMenor(int x[], int total) {
    int menor = x[0];
    for (int i = 1; i < total; i++) {
        if (x[i] < menor) {
            menor = x[i];
        }
    }
    return menor;
}

void imprimirVector(int x[], int total) {
    for (int i = 0; i < total; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

int main() {
    const int MAX = 10;
    int vector[MAX] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << "Vector: ";
    imprimirVector(vector, MAX);
    
    int menor = encontrarMenor(vector, MAX);
    cout << "El elemento menor es: " << menor << endl;

    return 0;
}
