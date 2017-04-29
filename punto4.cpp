#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{
	private: //Atributos
	string nombre;
	string apellido;
	int salario;

	public:
		Persona(string, string, int);
	
		void imprimirResultados();
};

//Constructor (inicializar atributos)
Persona::Persona(string _nombre, string _apellido, int _salario){
	nombre = _nombre;
	apellido = _apellido;
	salario = _salario;
}

void Persona::imprimirResultados(){
cout << "La persona " << nombre << " " << apellido << " devenga " << salario << endl;
}



int main(){

	string n, a;
	int s, opcion;


	cout<<"Ingrese su Nombre, Apellido y Salario de la persona 1"<<endl;
			cin>>n;
			cin>>a;
			cin>>s;
	Persona p2= Persona(n, a, s);

	cout<<"Ingrese su Nombre, Apellido y Salario de la persona 2"<<endl;
		cin>>n;
		cin>>a;
		cin>>s;
	Persona p3= Persona(n, a, s);

	cout<<"Ingrese su Nombre, Apellido y Salario de la persona 3"<<endl;
		cin>>n;
		cin>>a;
		cin>>s;
	Persona p3= Persona(n, a, s);

	cout << "Digite el numero de la persona que quiere imprimir su info" << endl;
	cin>>opcion;

	switch(opcion){
		 case 1:
		 cout<<p1.imprimirResultados();<<endl;
		 break;
		 case 2:
		 cout<<p2.imprimirResultados();<<endl;
		 break;
 		 case 3:
		 cout<<p3.imprimirResultados();<<endl;
		 break;


}