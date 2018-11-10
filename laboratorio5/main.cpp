#include <iostream>
#include "cuerpo.h"
#include<fstream>
#include <vector>
using namespace std;
int main()
{
    // ej1
    //A=70,0,-7000,2,0
    //B=70000,0,0,0,0
    //C=25,4000,5000,-1.6,1.2
    int co=0;
    typedef vector<cuerpo>cuerpos;
    cuerpos c={};
        cout<<"Cuantos objetos tiene su sistema?"<<endl<<"Ingresar:  ";
        cin>>co;
        for(int p=0;p<co;p++){
            float N;
            cout<<"ingrese la masa del obeto "<<p+1<<" : "<<endl;
            cin>>N;
            cuerpo a(1,1,1,1,1);
            a.setM(N);
            cout<<"ingrese la posicion px del obeto "<<p+1<< " : "<<endl;
            cin>>N;
            a.setPx(N);
            cout<<"ingrese la posicion py del obeto "<<p+1<< " : "<<endl;
            cin>>N;
            a.setPy(N);
            cout<<"ingrese la velocidad en X del obeto "<<p+1<<" : "<<endl;
            cin>>N;
            a.setVx(N);
            cout<<"ingrese la velocidad en Y del obeto "<<p+1<<" : "<<endl;
            cin>>N;
            a.setVy(N);
            c.push_back(a);
        }

    ofstream fout; //se crea un archivo de salida
    fout.open("test.txt"); //abre el archivo de salida
    for (int i=0;i<10000;i++)
    {
        for(int n=0;n<co;n++){
            for(int j=0;j<co;j++){
                if(n!=j){
                   c[n].calcularPosicion(c[j]);
                }
            }
            fout<<c[n].GetPx()<<"\t"<<c[n].GetPy()<<"\t";
            c[n].calcularP(1);
            c[n].setAx(0);
            c[n].setAy(0);
        }
        fout<<endl;
    }
    return 0;
}

//float dt,float px_b,float py_b,float px_c,float py_c,float masa_b,float masa_c

//float masa_ ,float xi_, float yi_,float vix_,float viy_

