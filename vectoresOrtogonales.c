#include <stdio.h>

/*
 Crea un programa que determine si dos vectores son ortogonales.
 - Los dos array deben tener la misma longitud.
 - Cada vector se podría representar como un array. Ejemplo: [1, -2]
*/
void orthogonalVectors(int dimension, int vectorOne[], int vectorTwo[]);
void capture(int dimension, int vector[]);

int dimension = 0;

int main(){
    printf("Indica la dimension de tus vectores: ");
    scanf("%d",&dimension);

    int vectorOne[dimension], vectorTwo[dimension];
    printf("1er vector...\n");
    capture(dimension, vectorOne);
    printf("2do vector...\n");
    capture(dimension, vectorTwo);
    orthogonalVectors(dimension, vectorOne, vectorTwo);
}


void capture(int dimension, int vector[]){
    int i = 0;
    while(i < dimension){
        printf("Ingrese el valor #%d: ",i+1);
        scanf("%d",&vector[i]);
        i++;
    }
}


void orthogonalVectors(int dimension, int vectorOne[], int vectorTwo[]){
    int i = 0, result = 0;

    while(i < dimension){
        result = result + (vectorOne[i] + vectorTwo[i]);
        i++;
    }
    if(!result)
        printf("Los vectores son Ortogonales\n");
    else
        printf("Los vectores NO son ortogonales\n");
}