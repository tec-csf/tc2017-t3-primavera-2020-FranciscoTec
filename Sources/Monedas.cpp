#include <iostream>
#include <string>
#include <array>

using namespace std;

string cambio(int cantidadM){
    int Monedas[]={10,5,2,1};
    int size = *(&Monedas+1)-Monedas;
    int sol[size];
    string cambio=to_string(cantidadM)+" en monedas es igual a ";
    for(int i=0; i<=size; i++){
         if (cantidadM>0){
         sol[i]=cantidadM/Monedas[i];
         cantidadM=cantidadM%Monedas[i];
         }
    }
    for (int i = 0; i < size; i++)
    {   
        if (size-i==1)
        {
            cambio+=" y "+to_string(sol[i])+" monedas(s) de "+to_string(Monedas[i]);
            break;
        }
        cambio+=to_string(sol[i])+" moneda(s) de "+to_string(Monedas[i])+", "; 
    }
    return cambio;
};

int main(){
    int valorM;
    cin>>valorM;
    cout<<cambio(valorM)<<endl;
}