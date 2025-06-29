#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Estructura para representar un contacto
struct contactoEmail {
    string nombres;
    string sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

// Función para mostrar el menú principal
void mostrarMenu() {
    cout << "\n--- GESTION DE CONTACTOS ---" << endl;
    cout << "a) Agregar un contacto" << endl;
    cout << "b) Eliminar un contacto" << endl;
    cout << "c) Mostrar listado general de contactos" << endl;
    cout << "d) Mostrar contactos ordenados por servidor de correo" << endl;
    cout << "e) Salir" << endl;
    cout << "Seleccione una opcion: ";
}

int main() {
    vector<contactoEmail> contactos; // Lista de contactos
    char opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore(); // Para evitar problemas 

        switch(opcion) {
            case 'a':
                // Agregar contacto 
                break;
            case 'b':
                // Eliminar contacto 
                break;
            case 'c':
                // Mostrar todos los contactos
                break;
            case 'd':
                // Mostrar por servidor de correo 
                break;
            case 'e':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }

    } while(opcion != 'e');

    return 0;
}

