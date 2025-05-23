
#ifndef OPERACION_H
#define OPERACION_H

class Operacion {
public:
    virtual double calcular(int x, int y) = 0; // Método abstracto: ABSTRACCIÓN
    virtual ~Operacion() {} // Destructor virtual
};

#endif
