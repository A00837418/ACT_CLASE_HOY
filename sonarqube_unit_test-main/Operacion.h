
#ifndef OPERACION_H
#define OPERACION_H

class Operacion {
public:
    virtual double calcular(int x, int y) = 0; // ABSTRACCIÓN
    virtual ~Operacion() {} 
};

#endif
