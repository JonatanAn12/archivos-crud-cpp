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
 alumno1.nombre = "Francis";
 alumno1.edad = 19;
 alumno1.nota = 7.9;
 return 0;

 alumnos alumno2;
 alumno2.nombre = "Luan";
 alumno2.edad = 24;
 alumno2.nota= 8.9;
 return 0;

 cout << alumno1.nombre << endl;
}

