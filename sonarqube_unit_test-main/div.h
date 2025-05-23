
#ifndef DIV_H
#define DIV_H

#include "Operacion.h"
#include <stdexcept>

class Division : public Operacion { // HERENCIA
public: 
    double calcular(int x, int y) override { // POLIMORFISMO
        if (y == 0) throw std::runtime_error("No se puede dividir entre cero.");
        return static_cast<double>(x) / y;
    }
};

#endif
