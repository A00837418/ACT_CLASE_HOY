
#ifndef SUM_H
#define SUM_H

#include "Operacion.h"

class Suma : public Operacion { // HERENCIA
public:
    double calcular(int x, int y) override { // POLIMORFISMO
        return x + y;
    }
};

#endif
