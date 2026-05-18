
//Israel Córdova Espinosa


#include <iostream>
#include <string>
using namespace std;

class Persona{
	protected:
	   string nombre;
	   int edad;
	   
	   void decirNombre(){
	cout<<"Hola, me llamo "<<nombre<<". ";
	}
	public:
	  Persona(string n, int e){
	  	nombre=n;
	  	edad=e;
	  }
	string getNombre(){
		return nombre;
	}
	int getEdad(){
		return edad;
	}
	void setNombre(string n){
		nombre=n;
	cout<<"El nuevo nombre es: "<<n<<endl;
	}
	void setEdad(int e){
		edad=e;
	cout<<"La nueva edad es: "<<e<<endl;
	}
};

class Alumno : public Persona{
	private:
	double promedio;
	string carrera;
	
	
	void decirTipo(){
		cout<<"Soy un alumno."<<endl;
	}
	public:
	
	Alumno(string n, int e, double p, string c):Persona(n,e){
		promedio=p;
		carrera=c;
	}
	
	string getCarrera(){
		return carrera;
	}
	double getPromedio(){
		return promedio;
	}
	void setCarrera(string c){
		carrera=c;
	cout<<"La nueva carrera es: "<<c<<endl;
	}
	void setPromedio(double p){
		promedio=p;
	cout<<"El nuevo promedio es: "<<p<<endl;
	}
void presentacion(){
		decirNombre();
		decirTipo();
		}		
	
};

class Profesor : public Persona{
	private:
	string asignatura;
	
	void decirTipo(){
		cout<<"Soy un profesor."<<endl;
	}
	public:
	
	Profesor(string n, int e, string a):Persona(n,e){
	asignatura=a;
	}
	
	string getAsignatura(){
		return asignatura;
	}
	void setAsignatura(string a){
		asignatura=a;
	cout<<"La nueva asignatura: "<<a<<endl;
	}
	
	void presentacion(){
		decirNombre();
		decirTipo();
		}	
};

void mostrar(Alumno &A){
cout<<"Nombre: "<<A.getNombre()<<endl;
cout<<"Edad: "<<A.getEdad()<<endl;
cout<<"Carrera: "<<A.getCarrera()<<endl;
cout<<"Promedio: "<<A.getPromedio()<<endl;
}

void mostrar(Profesor &P){
cout<<"Nombre: "<<P.getNombre()<<endl;
cout<<"Edad: "<<P.getEdad()<<endl;
cout<<"Asignatura: "<<P.getAsignatura()<<endl;	
}


int main()
{

Alumno A("Julio", 21, 4.78, "Derecho");
Profesor P("Roberto", 53, "Filosofia");
P.presentacion();
cout<<" "<<endl;
A.presentacion();
cout<<" "<<endl;
mostrar(P);
cout<<" "<<endl;
mostrar(A);



return 0;
}