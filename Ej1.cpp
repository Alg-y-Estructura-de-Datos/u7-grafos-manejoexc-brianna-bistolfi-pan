#include <iostream>
#include "Grafos/Grafo.h"
using namespace std;

int main() {
    Grafo<string> usuarios;
    int op = 0;

    while (op != 6) {
        cout << "ingrese operacion" << endl;
        cout << "1. Insertar Usuario" << endl;
        cout << "2. Agregar Amistad" << endl;
        cout << " 3. Eliminar Amistad" << endl;
        cout << " 4. Buscar Usuario" << endl;
        cout << " 5. Imprimir la Red Social" << endl;
        cin >> op;

        string a1, a2;
        string user;

        switch (op) {
            case 1:

                cout << "ingrese nombre del usuario" << endl;
                cin.ignore();
                getline(cin, user);
                usuarios.agregarNodo(user);
                break;
            case 2:
                cout << "ingrese primer usuario para formar amistad" << endl;
                cin.ignore();
                getline(cin, a1);
                cout << "ingrese segundo usuario para formar amistad" << endl;
                getline(cin, a2);
                try {
                    usuarios.agregarArista(a1, a2);
                    cout << " se armo amistad" << endl;
                } catch (int e) {
                    if (e == 200) {
                        cout << "no se encontro al usuario" << endl;
                    }
                }
                break;
            case 3:
                cout << "ingrese primer usuario para eliminaramistad" << endl;
                cin.ignore();
                getline(cin, a1);
                cout << "ingrese segundo usuario para eliminar amistad" << endl;
                cin.ignore();
                getline(cin, a2);
                try {
                    usuarios.eliminarArista(a1, a2);
                    cout << " se armo amistad" << endl;
                } catch (int e) {
                    if (e == 200) {
                        cout << "no se encontro al usuario" << endl;
                    }
                }

                break;
            case 4:
                cout << "ingrese nombre del usuario a buscar" << endl;
                cin.ignore();
                getline(cin, user);
                try {
                    usuarios.buscarNodo(user);
                    cout << " se encontro al usario" << endl;
                } catch (int e) {
                    if (e == 200) {
                        cout << "no se encontro al usuario" << endl;
                    }
                }

                break;
            case 5:
                cout << "se muestra red social: " << endl;
                usuarios.imprimir();
                break;
            default: cout << "error en la operacion" << endl;
        }
    }

    return 0;
}
