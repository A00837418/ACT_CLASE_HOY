
#ifndef SUB_H
#define SUB_H

#include "Operacion.h"

class Resta : public Operacion { // HERENCIA
public:
    double calcular(int x, int y) override { // POLIMORFISMO
        return x - y;
    }
};

#endif
