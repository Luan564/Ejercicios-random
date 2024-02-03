#include<stdio.h>
#include<string.h>
void main(){
    char nombre[30],apellido[20], gene;
    int edad;
    printf("Ingresa tu edad: ");
    scanf("%d",&edad);
    printf("Ingresa \"H\" para Hombre y \"M\" para Mujer edad: ");
    while(getchar()!='\n');
    scanf("%c",&gene);
    printf("Ingresa tu nombre: ");
    scanf(" %[^\n]",nombre);                        //Los [] en las expresiones regulares SOLO UN CARACTER
    printf("Ingresa tu apellido: ");
    scanf(" %[^\n]",apellido);
    printf("\n%s %s tu edad es %d\n",nombre,apellido,edad);

    }
