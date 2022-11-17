//Henrencia de Clase
//
# include <iostream>
# include <stdlib.h>
using namespace std;

class Persona{
  private: //atrib de Persona
	  string nombre;
	  int edad;
  public:
	//nom, edad
	  Persona(string,int);  //Constructor
	  virtual mostrarPersona();	//metodo a modificar
};

class Alumno : public Persona{  // Alumno hereda de Persona
  private:
	float nota;
  public:
	//nom, edad, nota
	Alumno(string,int,float);
	void mostrar();	
};

class Profesor:public Persona{
  private:
  string materia;
  public:
  Profesor(string,int,string);
  void mostrar();
}

//constructor de Persona
Persona::Persona(string _nombre,int _edad){
  nombre = _nombre;
  edad = _edad;
}
//constructor de Alumno
Alumno::Alumno(string _nombre,int _edad,float _nota) : Persona(_nombre,_edad){
  nota = _nota;
}
Profesor::Persona(string _nombre,int _edad,string _materia) : Persona(_nombre,_edad){
  materia = _materia; 
}
void Alumno::mostrar(){
  Persona::mostrar();
  cout<<"Nota Parcial: "<<nota<<"\n"<<endl;
}
void Persona::mostrar(){
  cout<<"Nombre: "<<nombre<<endl;
  cout<<"Edad: "<<edad<<"\n"<<endl;
}
void Profesor::mostrar(){
  Persona::mostrar();
  cout<<"Materia: "<<materia<<"\n"<<endl;
}

int main(){
  Persona *vector[3];

  vector[0] = new Alumno("Alejandro",35,18.96);
  vector[1] = new Alumno("Maria",28,11.96);
  vector[2] = new Profesor("Moises",40,"Introduccion Comp");

  vector[0]->mostrar();
  vector[1]->mostrar();
  vector[2]->mostrar();

  return 0;
}					 
