//
// Created by Laura on 29/08/2025.
//
#include <iostream>
#include <string>
#include "calificaciones_utils.h"

int main() {
    std::string nombreEstudiante;
    const int TAMANO = 5;
    double calificaciones[TAMANO];

    std::cout << "¿Cual es tu nombre: ";
    std::getline(std::cin, nombreEstudiante);

    std::cout << "\nPor favor ingresa " << TAMANO << " calificaciones (entre 0.0 y 5.0):\n";

    for (int i = 0; i < TAMANO; ++i) {
        double nota;
        bool notaValida = false;

        while (!notaValida) {
            std::cout << "Calificacion " << i + 1 << ": ";
            std::cin >> nota;

            if (nota >= 0.0 && nota <= 5.0) {
                calificaciones[i] = nota;
                notaValida = true;
            } else {
                std::cout << "Nota invalida. Debe estar entre 0.0 y 5.0. Intenta de nuevo.\n";
            }
        }
    }

    double promedio = calcularPromedio(calificaciones, TAMANO);
    double notaMinima = obtenerNotaMinima(calificaciones, TAMANO);
    double notaMaxima = obtenerNotaMaxima(calificaciones, TAMANO);

    std::cout << "\nResultados para " << nombreEstudiante << ":\n";
    std::cout << "Promedio: " << promedio << "\n";
    std::cout << "Tu nota mas baja: " << notaMinima << "\n";
    std::cout << "Tu nota mas alta: " << notaMaxima << "\n";

    return 0;
}
