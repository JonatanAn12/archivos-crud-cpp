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
 alumno1.nombre = "Jonatan";
 alumno1.edad = 18;
 alumno1.nota = 9.9;
 return 0;

 alumnos alumno2;
 alumno2.nombre = "Nikoll";
 alumno2.edad = 21;
 alumno2.nota= 9.9;
 return 0;

 cout << alumno1.nombre << endl;
}

