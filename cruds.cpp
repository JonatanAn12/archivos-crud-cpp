#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Persona {
public:
    Persona(string nombre, int edad) : nombre(nombre), edad(edad) {}

    string getNombre() const {
        return nombre;
    }

    int getEdad() const {
        return edad;
    }
   int edad;
private:
    string nombre;
    
};

void imprimirPersona(const Persona& persona) {
    cout << "Nombre: " << persona.getNombre() << ", Edad: " << persona.getEdad() << endl;
}

int main() {
    vector<Persona> personas;

personas.push_back(Persona("Marc", 29));
    personas.push_back(Persona("Lucia", 27));

    cout << "Personas en la lista:" << endl;
    for (const auto& persona : personas) {
        imprimirPersona(persona);
    }

    string nombreActualizar = "Marc";
    auto it = find_if(personas.begin(), personas.end(), [nombreActualizar](const Persona& p) {
        return p.getNombre() == nombreActualizar;
    });

    if (it != personas.end()) {
        it-> edad = 35;
        cout << "Edad de Marc actualizada." << endl;
    } else {
        cout << "Persona no encontrada." << endl;
    }

    cout << "Personas después de la actualización:" << endl;
    for (const auto& persona : personas) {
        imprimirPersona(persona);
    }

    string nombreEliminar = "Lucia";
    auto eraseIt = remove_if(personas.begin(), personas.end(), [nombreEliminar](const Persona& p) {
        return p.getNombre() == nombreEliminar;
    });

    personas.erase(eraseIt, personas.end());
    cout << "Persona Lucia eliminada." << endl;

    cout << "Personas después de la eliminación:" << endl;
    for (const auto& persona : personas) {
        imprimirPersona(persona);
    }

    return 0;
}

