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
 alumno1.nombre = "Sebastian";
 alumno1.edad = 28;
 alumno1.nota = 5.9;
 return 0;

 alumnos alumno2;
 alumno2.nombre = "Martina";
 alumno2.edad = 32;
 alumno2.nota= 2.7;
 return 0;

 cout << alumno1.nombre << endl;
}

