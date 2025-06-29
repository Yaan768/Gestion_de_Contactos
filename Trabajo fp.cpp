#include <iostream>
using namespace std;

struct contactoEmail {
    string nombreCompleto;
    char sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

const int MAX = 100;
contactoEmail contactos[MAX];
int totalContactos = 0;

void agregarContacto() {
    if (totalContactos < MAX) {
        cout << "\n--- Agregar nuevo contacto ---\n";
        cout << "Nombre completo (sin espacios): ";
        cin >> contactos[totalContactos].nombreCompleto;

        cout << "Sexo (M/F): ";
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
    } else {
        cout << "Se alcanzo el maximo de contactos.\n";
    }
}

void eliminarContacto() {
    if (totalContactos == 0) {
        cout << "No hay contactos registrados.\n";
        return;
    }

    cout << "\n--- Eliminar contacto ---\n";
    for (int i = 0; i < totalContactos; i++) {
        cout << i + 1 << ") " << contactos[i].nombreCompleto << " - " << contactos[i].email << endl;
    }

    int pos;
    cout << "Ingrese el numero del contacto que desea eliminar: ";
    cin >> pos;

    if (pos < 1 || pos > totalContactos) {
        cout << "Posicion invalida.\n";
        return;
    }

    // Desplazar contactos
    for (int i = pos - 1; i < totalContactos - 1; i++) {
        contactos[i] = contactos[i + 1];
    }

    totalContactos--;
    cout << "Contacto eliminado correctamente.\n";
}

void mostrarMenu() {
    cout << "\n===== MENU DE CONTACTOS =====\n";
    cout << "a) Agregar un contacto\n";
    cout << "b) Eliminar un contacto\n";
    cout << "c) Mostrar listado general\n";
    cout << "d) Mostrar ordenado por servidor de correo\n";
    cout << "e) Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    char opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch (opcion) {
            case 'a':
                agregarContacto();
                break;
            case 'b':
                eliminarContacto();
                break;
            case 'c':
                cout << "Mostrar listado general ";
                break;
            case 'd':
                cout << "[Mostrar ordenado por servidor ";
                break;
            case 'e':
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 'e');

    return 0;
}



