/*
 * Autores: 
 *  Andrés Felipe Valencia 
 *  Ricardo Valencia
 *  Jorge Reyes
 * Fecha de creacion: 26-04-2017
 */
 
 #include "Calculadora.h"
 #include <iostream>
 
 using namespace std;
 
 int main(){
	 int num1=0;
	 int num2=0;
	 int opcion;
	 
	 Calculadora objcalcu;
	 
	 cout<<"Calculadora"<<endl;
	 cout<<"-----------"<<endl;
	 cout<<"Ingrese el numero 1"<<endl;
	 cin>>num1;
	 objcalcu.setvalor1(num1);
	 cout<<"Ingrese el numero 2"<<endl;
	 cin>>num2;
	 objcalcu.setvalor2(num2);
	 cout<<"1)Suma"<<endl;
	 cout<<"2)Resta"<<endl;
	 cout<<"3)Multiplicacion"<<endl;
	 cout<<"4)Dividir"<<endl;
	 cout<<"5)Modulo"<<endl;
	 cout<<"6)Salir"<<endl;
	 cin>>opcion;
	 
	 switch(opcion){
		 case 1:
		 objcalcu.suma();
		 cout<<objcalcu.imprimir()<<endl;
		 break;
		 case 2:
		 objcalcu.resta();
		 cout<<objcalcu.imprimir()<<endl;
		 break;
 		 case 3:
		 objcalcu.multiplicar();
		 cout<<objcalcu.imprimir()<<endl;
		 break;
 		 case 4:
		 objcalcu.dividir();
		 cout<<objcalcu.imprimir()<<endl;
		 break;
		 case 5:
		 objcalcu.modulo();
		 cout<<objcalcu.imprimir()<<endl;
		 break;
 		 case 6:
 		 cout<<"Adios"<<endl;
		 break;
	 
 }
}
	 
