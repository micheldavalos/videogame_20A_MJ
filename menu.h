#ifndef MENU_H
#define MENU_H

#include "videojuego.h"

class Menu
{
public:
    Menu();
    void mostrar(Videojuego &v);

private:
    size_t getPosicion();
    Personaje getPersonaje();
};

#endif // MENU_H
