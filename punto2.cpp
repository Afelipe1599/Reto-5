/*
 * Autores:
 * Andres Felipe Valencia - 1667639
 * Ricardo Andres Valencia - 1667426
 * Jorge Reyes - 1667619
 * Fecha de creación: 26-04-17
*/


#include <iostream>
#include <math.h>

using namespace std;

void modificar(int * ptr){
	*ptr=pow(*ptr,2);
	}

int main(){
	
	int * prtVariable = 0;
	int entero1 = 100;
	prtVariable = &entero1;
	modificar(prtVariable);
	
	int entero2 = 300;
	prtVariable = &entero2;	
	modificar(prtVariable);
	
	cout << entero1 << " " << entero2 << endl;
	
	
	
	}

