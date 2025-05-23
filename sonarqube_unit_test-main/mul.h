#ifndef MUL_H
#define MUL_H

#include "Operacion.h"

class Multiplicacion : public Operacion { // HERENCIA
    
public:
    double calcular(int x, int y) override { // POLIMORFISMO
        return x * y;
    }
};

#endif
