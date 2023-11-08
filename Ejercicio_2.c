#include <stdio.h>

int main(){
	int matriz[2][3];//orden ---> f,c
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
		matriz[f][2] *= 3;
	}
	
	printf("Valores de la matriz \n");
	for(int f=0;f<2;f++){
		for(int c=0;c<3;c++){
			printf("%d \t",matriz[f][c]);
		}
		printf("\n");
	}
	return 0;
}
