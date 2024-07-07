//fecha: 19/06/24
////Autor:Lopez Quiroz Wagner
//tema: Diseñe la función que encuentra el elemento mayor de un vector de enteros.
#include <iostream>
using namespace std;

int encontrarMayor(int x[], int total) {
    int mayor = x[0];
    for (int i = 1; i < total; i++) {
        if (x[i] > mayor) {
            mayor = x[i];
        }
    }
    return mayor;
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
    
    int mayor = encontrarMayor(vector, MAX);
    cout << "El elemento mayor es: " << mayor << endl;

    return 0;
}
