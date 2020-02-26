#include "menu.h"

Menu::Menu()
{

}

void Menu::mostrar(Videojuego &v)
{
    string op;

    while (true) {
        cout << "1) Agregar Personaje" << endl;
        cout << "2) Mostrar Personajes" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Insertar" << endl;
        cout << "6) Inicializar" << endl;
        cout << "7) Eliminar" << endl;
        cout << "8) Ordenar" << endl;
        cout << "9) Buscar" << endl;
        cout << "0) Salir";
        getline(cin, op);

        if (op == "1") {
            v.agregar(getPersonaje());
        }
        else if (op == "2") {
            v.mostrar();
        }
        else if (op == "3") {
            v.respaldar();
        }
        else if (op == "4") {
            v.recuperar();
        }
        else if (op == "5") {
            size_t pos = getPosicion();
            if (pos >= v.size()) {
                cout << "posición no válida" << endl;
            }
            else {
                v.insertar(getPersonaje(), pos);
            }
        }
        else if (op == "6") {
            size_t n;

            cout << "n: ";
            cin >> n; cin.ignore();

            v.inicializar(getPersonaje(), n);
        }
        else if (op == "7") {
            size_t p = getPosicion();
            if (p >= v.size()) {
                cout << "posicion no valida" << endl;
            }
            else {
                v.eliminar(p);
            }
        }
        else if (op == "8") {
            v.sort();
        }
        else if (op == "9") {
            Personaje *ptr = v.buscar(getPersonaje());

            if (ptr == nullptr) {
                cout << "no encontrado" << endl;
            }
            else {
                cout << *ptr << endl;
            }
        }
        else if (op == "0") {
            break;
        }
    }
}

size_t Menu::getPosicion()
{
    size_t p;

    cout << "posicion: ";
    cin >> p; cin.ignore();

    return p;
}

Personaje Menu::getPersonaje()
{
    Personaje p;

    cin >> p;

    return p;
}











