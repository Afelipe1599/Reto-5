/*
 * Autores: 
 *  Andrés Felipe Valencia 
 *  Ricardo Valencia
 *  Jorge Reyes
 * Fecha de creacion: 26-04-2017
 */
 
 #include <iostream>
 #include <string>
 using namespace std;
 
 string a;

 void recolectarDatos(string ** &datos){
 	
	 for(int i=0;i<3;i++){
		 for(int j=0;j<2;j++){
		 	if (j==0){
		 		
		 		cout << "Ingrese nombre de persona #" << i+1 << endl;
		 		cin >> a;
		 	}
		 	else {
		 		cout << "Ingrese apellido de persona #" << i+1 << endl;
		 		cin >> a;
		 	}
		 	datos[i][j]= a;
		 }
	 }
 }
 
 /*void recolectarSalariosPersona(double *&salarios, string**&datos){

 }

 void imprimirResultados(double * &salarios, string ** & datos){

 }
*/			 
	 
 
 
 int main(){
	 string datos;
	 string ** arrayDatosPersona[3][2];
	 double * salariosPersona;
	 recolectarDatos(arrayDatosPersona);
	 cout << ** arrayDatosPersona[0][0] << endl;
	 //recolectarSalariosPersona(salariosPersona, arrayDatosPersona);
 }
