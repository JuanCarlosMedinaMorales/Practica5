#include <iostream>
#include "cuerpo.h"
#include <math.h>
using namespace std;
//constructor
cuerpo::cuerpo(float masa_ ,float xi_, float yi_,float vix_,float viy_)
{
    masa = masa_;
    px = xi_; // esto es igual a posicion en x del cuerpo ES LO QUE SE GUARDA
    py = yi_; //esto es igual a posicion en y del cuerpo SE GUARDA
    vx = vix_; // velocidad en x del cuerpo
    vy = viy_; //velocidad en y del cuerpo
    ax = 0; //aceleracion en x del cuerpo
    ay = 0; // aceleracion en y del cuerpo
    float rb=0; //distancia entre los cuerpos a y b
    float rc=0; //distancia entro los cuerpos a y c
    float angulob=0; //angulo que forma con b
    float anguloc=0; //angulo que forma con c
}
//destructor
cuerpo::~cuerpo()
{

}

float cuerpo::GetPx()
{
    return px;
}

float cuerpo::GetPy()
{
    return py;
}
float cuerpo::GetM()
{
    return masa;
}
void cuerpo::setPy(float Py_)
{
    py=Py_;
}
void cuerpo::setVx(float Vx_)
{
    vx=Vx_;
}
void cuerpo::setVy(float Vy_)
{
    vy=Vy_;
}
void cuerpo::setPx(float Px_)
{
    px=Px_;
}
void cuerpo::setM(float m)
{
    masa=m;
}

void cuerpo::setAx(float ax_)
{
    ax=ax_;

}

void cuerpo::setAy(float ay_)
{
    ay=ay_;
}
void cuerpo::calcularPosicion(cuerpo a)
{
    rb =sqrt((a.GetPx()-px)*(a.GetPx()-px)+(a.GetPy()-py)*(a.GetPy()-py));//sacamos la distancia entre el objeto a y el objeto b
    //rc =sqrt((px_c-px)*(px_c-px)+(py_c-py)*(py_c-py)); //distancia entre el objeto a y c
    angulob= atan2((a.GetPy()-py),(a.GetPx()-px)); // angulo entre el cuerpo a y b
    //cout<<angulob<<endl;
    //anguloc= atan2((py_c-py),(px_c-px)); // angulo entre el objeto a y c
    //cout<<anguloc<<endl;
    ax+= ((a.GetM())/(rb*rb))*cos(angulob); // calcula la aceleracion en x
    //cout<<"aceleracion en x es:  "<<ax<<endl;
    ay+= ((a.GetM())/(rb*rb))*sin(angulob); //calcula la aceleracion en y
    //cout<<"aceleracion en y es: "<<ay<<endl;
}
void cuerpo::calcularP(float dt)
{
    vx+= ax*dt; //calculamos la velocidad en x
    vy+= ay*dt; //calculamos la velocidad en y
    px+= (vx*dt)+((ax*dt*dt)/2.0); //calcula la posicion en x.
    py+= (vy*dt)+((ay*dt*dt)/2.0); //calcula la posicion en y.
}

