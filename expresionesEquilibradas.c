#include <stdio.h>
/*
  Crea un programa que comprueba si los paréntesis, llaves y corchetes
  de una expresión están equilibrados.
  - Equilibrado significa que estos delimitadores se abren y cieran
    en orden y de forma correcta.
  - Paréntesis, llaves y corchetes son igual de prioritarios.
    No hay uno más importante que otro.
  - Expresión balanceada: { [ a * ( c + d ) ] - 5 }
  - Expresión no balanceada: { a * ( c + d ) ] - 5 }
*/

int balanced(char array[]);
int limit(int obj1);

char array[] = {"{ [ a * ( c + d ) ] - 5 }"};

int main(){

    printf("%s\n",array);

    balanced(array);


}

int limit(int obj1){
    if(obj1 == -1){
        printf("Error la expresion No esta balanceada\n");
        return 0;
    }
    else
        return 1;
}

int balanced(char array[]){
    int i = 0;

    int braces = 0; int bracket = 0; int parenthesis = 0;

    while(array[i] != '\0'){

        //printf("%d %d %d\n",braces, bracket, parenthesis);

        //Abrir
        if(array[i] == 123){
            braces++;
            i++;
            continue;
        }
        else if(array[i] == 91){
            bracket++;
            i++;
            continue;
        }
        else if(array[i] == 40){
            parenthesis++;
            i++;
            continue;
        }
        //Cierres
        else if(array[i] == 125){
            braces--;
            if(!(limit(braces)))
                return 0;
            i++;
            continue;
        }
        else if(array[i] == 93){
            bracket--;
            if(!(limit(bracket)))
                return 0;
            i++;
            continue;
        }
        else if(array[i] == 41){
            parenthesis--;
            if(!(limit(parenthesis)))
                return 0;
            i++;
            continue;
        }

        //No Llaves, no corchetes y no parentesis
        else
            i++;
    }

    if(braces == 0 && bracket == 0 && parenthesis == 0)
        printf("La expresion esta balanceada\n");
    else
        printf("La expresion No esta balanceada\n");
}
        