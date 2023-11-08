#include <stdio.h>

int main() {
    int torre[20][6]; 
    int totalHabitantes = 0;
    int promedioPorPiso;
    
   
    for (int piso = 0; piso < 20; piso++) {
        for (int departamento = 0; departamento < 6; departamento++) {
            printf("Ingrese la cantidad de habitantes en el piso %d, departamento %d: ", piso + 1, departamento + 1);
            scanf("%d", &torre[piso][departamento]);
            totalHabitantes += torre[piso][departamento];
        }
    }
    
    promedioPorPiso = totalHabitantes / 20;
    
    printf("a) Cantidad total de habitantes: %d\n", totalHabitantes);
    printf("b) Cantidad promedio de habitantes por piso: %d\n", promedioPorPiso);
    
    return 0;
}
