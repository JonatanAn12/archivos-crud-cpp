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
 alumno1.nombre = "Lucas";
 alumno1.edad = 27;
 alumno1.nota = 8.8;
 return 0;

 alumnos alumno2;
 alumno2.nombre = "matilda";
 alumno2.edad = 26;
 alumno2.nota= 3.7;
 return 0;

 cout << alumno1.nombre << endl;
}

