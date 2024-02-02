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
 alumno1.nombre = "Pedro";
 alumno1.edad = 24;
 alumno1.nota = 7.8;
 return 0;

 alumnos alumno2;
 alumno2.nombre = "Luis";
 alumno2.edad = 34;
 alumno2.nota= 6.2;
 return 0;

 cout << alumno1.nombre << endl;
}

