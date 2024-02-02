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
 alumno1.nombre = "Paula";
 alumno1.edad = 21;
 alumno1.nota = 8.9;
 return 0;

 alumnos alumno2;
 alumno2.nombre = "Ramiro";
 alumno2.edad = 22;
 alumno2.nota= 8.7;
 return 0;

 cout << alumno1.nombre << endl;
}

