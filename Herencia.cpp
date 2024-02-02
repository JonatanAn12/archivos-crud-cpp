#include <iostream>
#include <string>

using namespace std;

class vehiculo {
    protected:
    string marca;

    public:
        vehiculo(string m) : marca(m) {}
        void mostrarMarca() {
            cout << "marca: " << marca << endl;
        }
};
class coche : public vehiculo {
    private: 
        int numPuertas;

    public: 
        coche(string m, int puertas) : vehiculo(m), numPuertas(puertas) {}

        void mostrarInfo() {
            mostrarMarca();
            cout << "Numero de puertas: " << numPuertas << endl;

        }
};

int main(){
    coche miCoche("lexus", 5);
    miCoche.mostrarInfo();
    return 0;
}