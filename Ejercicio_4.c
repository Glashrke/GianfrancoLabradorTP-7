#include <stdio.h>

int main() {
    int matriz[3][12]; 
    int coche, linea, recaudacion;
    int recaudacionLinea[3];
    int recaudacionCoche[12] = {0}; 
    int recaudacionTotal = 0; 

    while (1) {
        printf("Ingrese el numero de coche (1-12): ");
        scanf("%d", &coche);

        if (coche < 1) {
            break; 
        }

        printf("Ingrese el numero de linea (1-3): ");
        scanf("%d", &linea);
        printf("Ingrese la recaudacion: $");
        scanf("%d", &recaudacion);

        matriz[linea - 1][coche - 1] += recaudacion;
    
        recaudacionLinea[linea - 1] += recaudacion;
        recaudacionCoche[coche - 1] += recaudacion;
        recaudacionTotal += recaudacion;
    }
  
    for (int i = 0; i < 3; i++) {
        printf("Recaudacion total de la linea %d: $%d\n", i + 1, recaudacionLinea[i]);
    }

    for (int i = 0; i < 12; i++) {
        printf("Recaudacion total del coche %d: $%d\n", i + 1, recaudacionCoche[i]);
    }
   
    printf("Recaudacion total general: $%d\n", recaudacionTotal);

    return 0;
}

