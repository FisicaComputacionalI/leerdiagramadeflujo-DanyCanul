//Programa
//Autor: Daniela Canul Garcia
//Creado el 22 de Octubre de 2017
#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int p){
	bool siOnoPrimo=true;
	int i;
	for(i=3;i<p; i=i+2){		// el for comienza desde 3 por que ya se comprobo que no hay numeros pares
		if((p%i)==0){					// vamos de 2 en 2 para ahorrar tiempo y recursos y asi nos saltamos a los numeros pares 
			siOnoPrimo=false;		//si tiene divisor obviamente no es primo pero si no tiene divisores nos regresa un true
		}
	}

	return siOnoPrimo;
}



int main(){
int s=12, p; 				//creo variables
printf("Dame un numero entero");
scanf("%d", &p); 			//leo un numero entero que no puede ser 1 por que uno no esta definido si es o no primo

do{
	if((p%2)==0){			//evaluamos que p no sea par
		printf("es Par");
		p++;		 		// si p es par hacemos un incremento 
	}
	
	if(esPrimo(p)){		//llamo a la funcion esPrimo para que me diga si es o no primo
		printf("\n El num %i es primo", p);
		if(p<s){
			s=s-p;
		}else{
			s=s-1;
		}
	}
	
	if(s!=0){	//si s==0 ya no aumento la p para que o programa finalize con el valor del ultimo valor primo de p
		p=p+2;
	}
	
	
}while(s!=0);				//Pregunto si S es igual a 0

	printf("\n Resultado de p %i", p);
	
	return 0;
}

  
 
 
