#include <stdio.h>

int main(){
	int matriz[2][3];//orden ---> f,c
	int menor;
	int suma=0;
	for(int f=0;f<2;f++){
		printf("\nIngrese la fila n°%d: \n",f+1);
		for(int c=0;c<3;c++){
			printf("Entero de la posicion: %d:%d\n",f+1,c+1);
			scanf("%d",&matriz[f][c]);
		}
	}
	
	for(int c=0;c<3;c++){
		matriz[0][c]*=4;
	}
	for(int f=0;f<2;f++){
		matriz[f][2]*=3;
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			if(i==0 && j==0){
				menor=matriz[i][j];
			}
			if(matriz[i][j]<=menor){
				menor = matriz[i][j];
			}
			suma = suma + matriz[i][j];
		}
	}

	printf("Valores de la matriz \n");
	for(int f=0;f<2;f++){
		for(int c=0;c<3;c++){
			printf("%d \t",matriz[f][c]);
		}
		printf("\n");
	}
	printf("El menor es: %d \n",menor);
	printf("Suma total de todos los elementos posicionados de la matriz: %d \n",suma);
	return 0;
}
