#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

/* codgio para obtener la mediana de un arreglo k formado por 2 arreglos X e Y de tamaño n ordenados de manera creciente */
using namespace std;

int encontrarMedio(int sizeK){
    int x[sizeK];
    int y[sizeK];
    int xit = sizeof(x)/sizeof(x[0]);
    int yit = sizeof(y)/sizeof(y[0]);
    srand(time(NULL));
    for (int i = 0; i < sizeK; i++)
    {
        x[i]=rand()%(sizeK+2);
        y[i]=rand()%(sizeK+2);

    }
    sort(x,x+xit);
    sort(y,y+yit);
    int merged[sizeK*2];
    int mit = sizeof(merged)/sizeof(merged[0]);
    int n=0;
    for (int i = 0; i < sizeK*2; i++)
    {
        if (i<sizeK){
            merged[i]=x[i];
        }
        else{
            merged[i]=y[n];
            n++;
        }
    }
    sort(merged,merged+mit);
    int f=sizeK%2;
    cout<<"Los elementos en el vector X son "<<endl;
    for (int i = 0; i < sizeK; i++)
    {
        cout<<x[i]<<" ";
    }
        cout<<'\n'<<"su media se encuentra en "<<x[sizeK/2]<<endl;
    cout<<'\n'<<"Los elementos en el vector Y son "<<endl;
    for (int i = 0; i < sizeK; i++)
    {
        cout<<y[i]<<" ";
    }
        cout<<'\n'<<"su media se encuentra en "<<y[sizeK/2]<<endl;

    cout<<'\n'<<"Por lo tanto los elementos en la union x y son "<<endl;
    for (int i = 0; i < sizeK*2; i++)
    {
        cout<<merged[i]<<" ";
    }
        cout<<'\n'<<"su media se encuentra en "<<merged[(sizeK*2)/2]<<endl;

};

int main(){
    encontrarMedio(11);
    return 0;
}
