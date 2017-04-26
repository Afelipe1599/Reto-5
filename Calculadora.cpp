/*
 * Autores: 
 *  Andrés Felipe Valencia 
 *  Ricardo Valencia
 *  Jorge Reyes
 * Fecha de creacion: 26-04-2017
 */
 
 #include "Calculadora.h"
 
Calculadora::Calculadora(){
	this->valor1 = 0;
	this->valor2 = 0;
	this->resultado = 0;
	
}

Calculadora::~Calculadora(){}

int Calculadora::imprimir(){
	return resultado;
}

void Calculadora::setvalor1(int num1){
	this->valor1 = num1;
}

void Calculadora::setvalor2(int num2){
	this->valor2 = num2;
}	

void Calculadora::suma(){
	this->resultado = valor1+valor2;
}
void Calculadora::resta(){
	this->resultado = valor1-valor2;
}
void Calculadora::multiplicar(){
	this->resultado = valor1*valor2;
}
void Calculadora::dividir(){
	this->resultado = valor1/valor2;
}
void Calculadora::modulo(){
	this->resultado = valor1%valor2;
}
