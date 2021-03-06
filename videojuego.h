#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <iostream>
#include <vector>
using namespace std;
#include "personaje.h"

class Videojuego
{
    vector<Personaje> arreglo;
    size_t i;
public:
    Videojuego();
    void agregar(const Personaje &p);
    void mostrar();
    void respaldar();
    void recuperar();

    void insertar(const Personaje &per, size_t p);
    size_t size()
    {
        return arreglo.size();
    }
    void inicializar(const Personaje &per, size_t n);
    void eliminar(size_t p);
    void sort();
    Personaje* buscar(const Personaje &p);
};

#endif // VIDEOJUEGO_H






