//fecha: 07/07/24
////Autor:Lopez Quiroz Wagner
//tema:1) Función de búsqueda de elementos en un vector de enteros: versión 1(devuelve true/false) y versión 2(devuelve posición del elemento encontrado).
#include<iostream>
using namespace std;
//duvuelve true si lo encuentra, fase en caso contrario
bool BuscaElementos(int vector[], int total, int elemento)
{
    for (int k = 0; k<total; k++)
    {
        if (vector[k]==elemento)
        return true;
         
    }
return false;
     

} 

//elementos de vector
//devuelve posicion 
//duvielve -1 si no existe

int BuscaElementosv2(int vector[], int total, int elemento)
{
  
    for (int k = 0; k<total; k++)
    {
        if (vector[k]==elemento)
   
      return k;
    }
    return -1;
}

int main()
{
    const int MAX=10;
    int vector [MAX];
    vector[0]=10; vector[1]=22; vector[2]=15;
    vector[3]=65; vector[4]=12; vector[5]=5;
    vector[6]=4;  vector[7]=1;  vector[8]=69;
    vector[9]=34;

    int x=4;
    bool res = BuscaElementos(vector, MAX, x);
    if (res)
      cout<<endl<<"el elemento "<< x << " si existe";
    else
      cout<<endl<<"el elemento "<< x << " no existe";

    x=100;
    if(BuscaElementos(vector, MAX, x))
      cout<<endl<<"el elemento "<< x << " si existe";
    else 
      cout<<endl<<"el elemento "<< x << " no existe";

     x=34;

     bool pos = BuscaElementosv2(vector, MAX, x);
    if (pos >= 0)
      cout<<endl<<"el elemento "<< vector [pos] << " encontrado posicion " << pos;
    else
      cout<<endl<<"el elemento "<< x << " no existe en el vector";


    return 0;
}
