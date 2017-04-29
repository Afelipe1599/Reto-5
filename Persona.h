/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 29 de Abril
 */

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona{
	  private:
	          string nombre;
	          string apellido;
	          int salario;
	  public:
	         Persona();
	         ~Persona();
	         
	         string getNombre();
	         string getApellido();
	         int getSalario();
	         
	         void RecolectarDatos(string nombreIn, string apellidoIN, int salarioIn);
	         
		 };
		 #endif

	                 
	          
	
	
