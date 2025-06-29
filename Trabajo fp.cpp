#include <iostream>
#include <string>
using namespace std;

const int MAX_CONTACTOS = 100;

struct ContactoEmail {
    string nombreCompleto;
    string sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

ContactoEmail contactos[MAX_CONTACTOS];
int totalContactos = 0;

void agregarContacto() {
    if (totalContactos >= MAX_CONTACTOS) {
        cout << "No se pueden agregar más contactos.\n";
        return;
    }

    cout << "\n--- Agregar nuevo contacto ---\n";
    cout << "Nombre completo: ";
    cin >> contactos[totalContactos].nombreCompleto;
    cout << "Sexo: ";
    cin >> contactos[totalContactos].sexo;
    cout << "Edad: ";
    cin >> contactos[totalContactos].edad;
    cout << "Telefono: ";
    cin >> contactos[totalContactos].telefono;
    cout << "Email: ";
    cin >> contactos[totalContactos].email;
    cout << "Nacionalidad: ";
    cin >> contactos[totalContactos].nacionalidad;

    totalContactos++;
    cout << "Contacto agregado correctamente.\n";
}

void eliminarContacto() {
    if (totalContactos == 0) {
        cout << "\nNo hay contactos para eliminar.\n";
        return;
    }

    int posicion;
    cout << "\n--- Eliminar contacto ---\n";
    cout << "Ingrese la posicion del contacto (1 a " << totalContactos << "): ";
    cin >> posicion;

    if (posicion < 1 || posicion > totalContactos) {
        cout << "Posicion invalida.\n";
        return;
    }

    for (int i = posicion - 1; i < totalContactos - 1; i++) {
        contactos[i] = contactos[i + 1];
    }

    totalContactos--;
    cout << "Contacto eliminado exitosamente.\n";
}

void mostrarContactos() {
    if (totalContactos == 0) {
        cout << "\nNo hay contactos registrados.\n";
        return;
    }

    cout << "\n--- Listado de contactos ---\n";
    for (int i = 0; i < totalContactos; i++) {
        cout << "\nContacto #" << i + 1 << ":\n";
        cout << "Nombre: " << contactos[i].nombreCompleto << endl;
        cout << "Sexo: " << contactos[i].sexo << endl;
        cout << "Edad: " << contactos[i].edad << endl;
        cout << "Telefono: " << contactos[i].telefono << endl;
        cout << "Email: " << contactos[i].email << endl;
        cout << "Nacionalidad: " << contactos[i].nacionalidad << endl;
    }
}

int main() {
    char opcion;

    do {
        cout << "\n===== MENU DE GESTION DE CONTACTOS =====\n";
        cout << "a) Agregar un contacto\n";
        cout << "b) Eliminar un contacto\n";
        cout << "c) Mostrar listado general de contactos\n";
        cout << "d) Mostrar listado ordenado por servidor de correo (en desarrollo)\n";
        cout << "e) Salir del programa\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 'a':
                agregarContacto();
                break;
            case 'b':
                eliminarContacto();
                break;
            case 'c':
                mostrarContactos();
                break;
            case 'd':
                cout << "Funcion en desarrollo...\n";
                break;
            case 'e':
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente nuevamente.\n";
        }

    } while (opcion != 'e');

    return 0;
}




