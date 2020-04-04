#include <stdio.h>
#include <stdlib.h>

int main(){
	
	srand(time(NULL));
	int i, t;
	
	printf("Ingrese un tamaño del arreglo entre 5 y 10: \n");
	scanf("%i", &t);
	int arreglo [t];
	
	//Valida tamaño del arreglo 5-10
	if(t>=5 && t<=10){
		//Se inicia valor de I con incremento
		for(i=0;i<t;i++){
			//Se usa función para crear numeros aleatorios
			int r = rand() % t*2;
			//se asigna variable de comparación y validador
			int j, existe=0;
			for(j=0;j<t;j++){
				//Se compara elementos de arreglo y igualdad
				if(arreglo[j]==r){
					existe=1;
					break;
				}
			}
			
			if(existe==1){
				int repetido=1;
				while(repetido==1){
					int encontrado=0;
					r = rand() % t*2;
					
					for(j=0;j<t;j++){
						
						if(arreglo[j]==r){
							encontrado=1;
								
						}
					}
					if(encontrado==0){
						repetido=0;
					}
				}			
			}
			
			arreglo[i]=r;
			printf("%i: %i \n", i, arreglo[i]);

			}

	}
	
	else {
		printf("Debes elegir un tamaño entre 5 y 10. \n");
	}
	
	return 0;
}