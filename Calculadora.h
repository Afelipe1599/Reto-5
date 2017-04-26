/*
 * Autores: 
 *  Andrés Felipe Valencia 
 *  Ricardo Valencia
 * Fecha de creacion: 26-04-2017
 */
 
 #ifndef CALCULADORA_H
 #define CALCULADORA_H
 
 using namespace std;
 
 class Calculadora{
	    private:
	           int valor1;
	           int valor2;
	           int resultado;
	    public:
	           Calculadora();
	           ~Calculadora();
	           
	           int imprimir();
	           
	           void setvalor1(int num1);
	           void setvalor2(int num2);
	           void suma();
	           void resta();
	           void multiplicar();
	           void dividir();
	           void modulo();
	           
		   };
		   #endif
		   
	    
	    
