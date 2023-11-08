#include <stdio.h>

int main(){
    int notas[100][3];
    int legajo = 0, trimestre = 0, nuevaNota = 0, aux = 0;
    int respuestas=0;

    for(legajo = 0; legajo <100;legajo++){
        printf("Ingrese las notas del alumno n°%d: \n",legajo+1);
        for(trimestre = 0;trimestre<3;trimestre++){
            printf("Ingrese nota del %d° trimestre: \n",trimestre+1);
            scanf("%d",&notas[legajo][trimestre]);
        }
    }

    do{
        printf("¿Desea corregir alguna nota? \n Responda con el numero 1 para SI, numero 2 para NO \n");
        scanf("%d",&aux);
        if(aux==1){
            printf("Ingresa el numero de legajo: \n");
            scanf("%d",&legajo);
            legajo--;

            printf("Ingresa el trimestre a corregir (1, 2 o 3): \n");
            scanf("%d",&trimestre);
            trimestre--;

            printf("nota anterior (del %d trimestre): %d \n",trimestre,notas[legajo][trimestre]);
            printf("Ingrese la nueva nota: \n");
            scanf("%d",&nuevaNota);

            printf("Confirma la modificación? (1.SI/2.NO)");
            scanf("%d",&respuestas);
            if(respuestas==1){
                notas[legajo][trimestre]=nuevaNota;
                printf("Modificación confirmada!\n");
            }
        } else {
            printf("Su respuesta fue NO, que tenga buen dia. \n\nA continuacion pondré en pantalla las notas ya cargadas. \n");
            break;
        }
    }while(aux != 0);

    printf("\nMatriz de notas:\n");
    for (legajo = 0; legajo < 100; legajo++) {
        printf("Legajo n°%d: ", legajo + 1);
        for (trimestre = 0; trimestre < 3; trimestre++) {
            printf("%d \t", notas[legajo][trimestre]);
        }
        printf("\n");
    }

    return 0;
}