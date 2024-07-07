//fecha: 07/07/24
////Autor:Lopez Quiroz Wagner
//tema:Función que invierte los elementos de un vector
#include<iostream>
using namespace std;
void invertirVector(int x[], int total)
{
    int i=0;
    int j=total-1;
    while(i<j){
        int aux=x[i];
        x[i]=x[j];
        x[j]=aux;
        i++;
        j--;

    }
}
void imprimirvector(int x[], int total){
    for(int i=0; i<total; i++){
        cout<<x[i]<<" ";

    }
    cout<<endl;
}

main()
{
    const int MAX=10;
    int vector[MAX]= {1,2,3,4,5,6,7,8,9,10};
    cout<<endl<<"vector original: ";
    imprimirvector(vector, MAX);
    invertirVector(vector, MAX);
    cout<<endl<<"vector invertido: ";
    imprimirvector(vector, MAX);

    return 0;
}