/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 29 de Abril
 */
 
 #include "Persona.h"
 #include <iostream>
using namespace std;

int main(){
	string n,a;
	int s;
	Persona person;
	
			cout<<"Ingrese su Nombre, Apellido y Salario"<<endl;
			cin>>n;
			cin>>a;
			cin>>s;
			person.RecolectarDatos(n,a,s);
			
			cout<<"Los datos de la persona son"<< person.getNombre<< person.getApellido<< person.getSalario<<endl;
		}
		
