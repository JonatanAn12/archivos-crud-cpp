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
    persona1.nombre = "laura";
    persona1.edad = 23;
    persona1.saludar();
   
    return 0;
}
