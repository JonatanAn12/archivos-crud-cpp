#include <iostream>
#include <string>
 
using namespace std;

class persona {
    private: 
            string nombre;
            int edad; 


    public: 

        void setNombre(string n) {
                nombre = n;
        }

        string getNombre() {
             return nombre;
        }

        void setEdad(int e){
            if (e >= 0){
                edad = e;
            }
        }
        int getEdad(){
           return edad;
           }
};

int main()
{
persona persona1;
persona1.setNombre("Julian");
persona1.setEdad(31);

cout << "Nombre: " << persona1.getNombre() << endl;
cout << "Edad: " << persona1.getEdad() << endl;
}
