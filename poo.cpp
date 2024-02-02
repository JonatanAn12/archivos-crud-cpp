#include <iostream>
#include <string>

using namespace std;

class persona {
    public:
            string nombre;
            int edad;
            void saludar (){
                cout << "hola soy" << nombre << "y tengo" << edad << "años" << endl;
            }
};
int main ()
{
    persona persona1;
    persona1.nombre = "Nikoll";
    persona1.edad = 22;
    
    persona1.saludar();
   
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class persona {
    public: 
         Persona(string nombre, int edad) : nombre("nombre"), edad("edad") {}
         
         string getNombre() const {
            return nombre;
         }

          int getEdad() const{
            return edad;
          }
private:
string nombre;
int edad
}