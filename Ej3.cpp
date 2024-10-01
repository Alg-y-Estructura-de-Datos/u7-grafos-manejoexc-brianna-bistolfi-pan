#include <iostream>
#include "Grafos/Grafo.h"
using namespace std;

int main() {

    Grafo<string> ciudad;


    int op = 0;

    do {
        cout << "Elige que opcion desea realizar: " << endl;
        cout << "1. Agregar estacion " << endl;
        cout << "2. conectar rutas entre estaciones " << endl;
        cout << "3. Eliminar una estacion " << endl;
        cout << "4. eliminar una ruta " << endl;
        cout << "5. consultar conectividad " << endl;
        cout << "6. verificar si existe una estacion  " << endl;
        cout << "7. imprimir el mapa completo " << endl;
        cout << "8. salir del programa " << endl;
        cin >> op;

        string estacion, estacion2, ruta;

        switch (op) {
            case 1:
                cout << "\nIngrese nueva estacion: " << endl;
                cin >> estacion;
                ciudad.agregarNodo(estacion);
                break;
            case 2:
                cout << "\ningrese primera estacion: " << endl;
                cin >> estacion;
                cout << "\ningrese segunda estacion: " << endl;
                cin >> estacion2;
                ciudad.agregarArista(estacion, estacion2);
                cout << "\nse armo ruta de conexion entre " << estacion << " y " << estacion2 << "." << endl;
                break;
            case 3:
                cout << "\ningrese primera estacion a eliminar conexcion: " << endl;
                cin >> estacion;
                cout << "\ningrese segunda estacion a eliminar conexion: " << endl;
                cin >> estacion2;
                ciudad.eliminarArista(estacion, estacion2);
                cout << "\nse elimino ruta de conexion entre " << estacion << " y " << estacion2 << "." << endl;
                break;
            case 4:
                cout << "\ningrese ruta a eliminar: " << endl;
                cin >> ruta;
                ciudad.eliminarNodo(ruta);
                cout << "se elimino la ruta: " << ruta << " en la comision." << endl;

                break;
            case 5:
                cout << "\ningrese primer estacion " << endl;
                cin >> estacion;
                cout << "\ningrese segunda estacion " << endl;
                cin >> estacion2;
                if (ciudad.estanConectados(estacion, estacion2)) {
                    cout << "\ndichas estaciones estan conectadas" << endl;
                } else
                    cout << "\nlas estaciones no estan conectadas" << endl;

                break;
            case 6:
                cout << "\nIngrese estacion a verificar : " << endl;
                cin >> estacion;
                if (ciudad.buscarNodo(estacion)) {
                    cout << "\nexiste dicha estacion en el mapa" << endl;
                } else
                    cout << "\nno existe la estacion" << endl;
                break;
            case 7:
                cout << "\nse imprime mapa de la ciudad: " << endl;
                ciudad.imprimir();
                break;
            case 8:
                cout << "\nsaliendo del programa..." << endl;
                exit(-1);
            default: cout << "\nerror en la opcion" << endl;
                break;
        }
    } while (op != 8);
    return 0;
}
