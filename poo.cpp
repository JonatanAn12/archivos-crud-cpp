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
    persona1.nombre = "Paola";
    persona1.edad = 29;
    persona1.saludar();
   
    return 0;
}
