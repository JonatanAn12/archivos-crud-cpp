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
 alumno1.nombre = "juan";
 alumno1.edad = 25;
 alumno1.nota = 7.2;
 return 0;

 alumnos alumno2;
 alumno2.nombre = "jaime";
 alumno2.edad = 34;
 alumno2.nota= 8.2;
 return 0;

 cout << alumno1.nombre << endl;
}

