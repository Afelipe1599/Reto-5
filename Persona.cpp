/*
 * Autores: 
 *  Andrés Valencia
 *  Jorge Reyes 
 *  Ricardo Valencia        
 * Fecha de modificación: 29 de Abril
 */
 
 #include "Persona.h"
 
 Persona::Persona(){
	 nombre = " ";
	 apellido = " ";
	 salario = 0;
 }
 
 Persona::~Persona(){}
 
 string Persona::getNombre(){
	 return nombre;
 }
 
 string Persona::getApellido(){
	 return apellido;
 }
 
 int Persona::getSalario(){
	 return salario;
 }
 
 
void Persona::RecolectarDatos(string nombreIn, string apellidoIN, int salarioIn){
	nombre = nombreIn;
	apellido = apellidoIN;
	salario = salarioIn;
}
