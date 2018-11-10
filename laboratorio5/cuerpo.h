#ifndef CUERPO_H
#define CUERPO_H


class cuerpo
{
private: //atributos
    float masa; //masa del objeto
    float px; // posicion en x.
    float py; // posicion en y.
    float vx; // velocidad inicial en x.
    float vy; //velocidad inicial en y.
    float ax;//acerelacion en x
    float ay; //aceleracion en y
    float vix; //velocidad inicial en x
    float viy; //velocidad inicial en y
    float xi; //posicion incial en x
    float yi; //posicion inicial en y
    float rb;
    float rc;
    float angulob;
    float anguloc;


public: // metodos
    cuerpo(float masa_ ,float xi_, float yi_,float vix_,float viy_);//constructor
    ~cuerpo(); // destructor;
    float GetPx(); //metodo para mostrar la posicion en x.
    float GetPy(); // metodo para mostrar la posicion en y.
    float GetM();
    void setPx(float);
    void setPy(float);
    void setVx(float);
    void setVy(float);
    void setM(float);
    void setAx(float);
    void setAy(float);
    void calcularPosicion(cuerpo); //metodo para calcular la posicion del objeto
    void calcularP(float);

};

#endif // CUERPO_H
