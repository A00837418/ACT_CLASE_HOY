#include <iostream>
#include <memory>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"

void ejecutarOperacion(Operacion* op, int a, int b, const std::string& nombre) { 
    try {
        std::cout << nombre << " de " << a << " y " << b << " es: "  
                  << op->calcular(a, b) << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error en " << nombre << ": " << e.what() << std::endl;
    }
}

int main() {
    int a = 20;
    int b = 4;

    Suma suma;
    Resta resta;
    Multiplicacion mult;
    Division div;

    ejecutarOperacion(&suma, a, b, "Suma");
    ejecutarOperacion(&resta, a, b, "Resta");
    ejecutarOperacion(&mult, a, b, "Multiplicacion");
    ejecutarOperacion(&div, a, b, "Division");

    return 0;
}
