#include <iostream>
#include "Grafos/Grafo.h"
using namespace std;

int main() {
    Grafo<string> comision;


    int op = 0;

    do {
        cout << "Elige que opcion desea realizar: " << endl;
        cout << "1. Agregar miembro a la comision " << endl;
        cout << "2. Agregar una nueva colaboracion " << endl;
        cout << "3. Eliminar una colaboracion " << endl;
        cout << "4. Buscar un miembro de la comision " << endl;
        cout << "5. Mostrar miembros de la comision " << endl;
        cout << "6. salir del programa  " << endl;
        cin >> op;

        string persona, pers;

        switch (op) {
            case 1:
                cout << "\nIngrese nombre del nuevo miembro: " << endl;
                cin >> persona;
                comision.agregarNodo(persona);
                break;
            case 2:
                cout << "\ningrese nombre del primer colaborador: " << endl;
                cin >> persona;
                cout << "\ningrese nombre del segundo colaborador: " << endl;
                cin >> pers;
                comision.agregarArista(persona, pers);
                cout << " se Armo colaboracion entre " << persona << " y " << pers << "." << endl;


                break;
            case 3:
                cout << "\ningrese nombre del primer colaborador: " << endl;
                cin >> persona;
                cout << "\ningrese nombre del segundo colaborador: " << endl;
                cin >> pers;
                comision.eliminarArista(persona, pers);
                cout << "se elimino colaboracion entre " << persona << " y " << pers << "." << endl;
                break;
            case 4:
                cout << "\ningrese a quien desea buscar: " << endl;
                cin >> persona;
                if (comision.buscarNodo(persona)) {
                    cout << "se encontro a " << persona << " en la comision." << endl;
                } else {
                    cout << "no se encontro a " << persona << " en la comision." << endl;
                }
                break;
            case 5:
                cout << "\nse muestra integrantes de la comision: " << endl;
                comision.imprimir();
                break;
            case 6:
                cout << "\nsaliendo del programa..." << endl;
                exit(-1);
            default: cout << "\nerror en la opcion" << endl;
                break;
        }
    } while (op != 6);
    return 0;
}
