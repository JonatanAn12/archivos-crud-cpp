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

personas.push_back(Persona("Leo", 38));
    personas.push_back(Persona("Rosa", 40));

    cout << "Personas en la lista:" << endl;
    for (const auto& persona : personas) {
        imprimirPersona(persona);
    }

    string nombreActualizar = "Leo";
    auto it = find_if(personas.begin(), personas.end(), [nombreActualizar](const Persona& p) {
        return p.getNombre() == nombreActualizar;
    });

    if (it != personas.end()) {
        it-> edad = 50;
        cout << "Edad de fernando actualizada." << endl;
    } else {
        cout << "Persona no encontrada." << endl;
    }

    cout << "Personas después de la actualización:" << endl;
    for (const auto& persona : personas) {
        imprimirPersona(persona);
    }

    string nombreEliminar = "Rosa";
    auto eraseIt = remove_if(personas.begin(), personas.end(), [nombreEliminar](const Persona& p) {
        return p.getNombre() == nombreEliminar;
    });

    personas.erase(eraseIt, personas.end());
    cout << "Persona Rosa eliminada." << endl;

    cout << "Personas después de la eliminación:" << endl;
    for (const auto& persona : personas) {
        imprimirPersona(persona);
    }

    return 0;
}

