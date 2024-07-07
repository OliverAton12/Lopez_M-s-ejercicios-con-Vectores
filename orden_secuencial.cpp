//fecha: 07/07/24
////Autor:Lopez Quiroz Wagner
//tema: Se tiene un vector de N nombres de personas. Diseñe la función que ordena este vector usando el algoritmo de ordenación secuencial. 
#include <iostream>
#include <string>
using namespace std;

void ordenarVector(string nombres[], int total) {
    for (int i = 0; i < total - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < total; j++) {
            if (nombres[j] < nombres[minIndex]) {
                minIndex = j;
            }
        }
        // Intercambiar nombres[i] con nombres[minIndex]
        string aux = nombres[i];
        nombres[i] = nombres[minIndex];
        nombres[minIndex] = aux;
    }
}

void imprimirVector(string nombres[], int total) {
    for (int i = 0; i < total; i++) {
        cout << nombres[i] << " ";
    }
    cout << endl;
}

int main() {
    const int MAX = 5;
    string vector[MAX] = {"Juan", "Ana", "Luis", "Marta", "Carlos"};
    cout << "Vector original: ";
    imprimirVector(vector, MAX);
    
    ordenarVector(vector, MAX);
    cout << "Vector ordenado: ";
    imprimirVector(vector, MAX);

    return 0;
}
