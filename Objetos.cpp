#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class alumnos {
 public:
 string nombre;
 int edad;
 double nota;

};

int main() {
    
 alumnos alumno1;
 alumno1.nombre = "Andres";
 alumno1.edad = 21;
 alumno1.nota = 9.5;
 return 0;

 alumnos alumno2;
 alumno2.nombre = "Valentina";
 alumno2.edad = 23;
 alumno2.nota= 9.7;
 return 0;

 cout << alumno1.nombre << endl;
}

