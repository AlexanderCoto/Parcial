#include <iostream>
using namespace std;
int main() {
     float Voltaje=0.0, Resistencia=0.0, Corriente=0.0;
     cout<<"Calcular cuanta corriente pasara a traves de la bombilla led\n";
     cout<<"Ingresar el voltaje: ";
     cin>>Voltaje;
     if (Voltaje > 0)
     {
        cout<<"Ingresar la resistencia: ";
        cin>>Resistencia;
     
     
         if (Resistencia > 0)
     
        {
            Corriente=Voltaje/Resistencia;
            cout<<"La corriente electrica que circulara a traves de la bombilla LED al encenderse es: "<<Corriente<<endl;
        }
        else{
            cout<<"El dato es erroneo ";
        }
    }
        else{
           cout<<"El dato es erroneo "; 
        }
    
     return 0;
    
    }