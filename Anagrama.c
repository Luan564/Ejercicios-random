#include <stdio.h>

/*
    Escribe una función que reciba dos palabras (String) y retorne
    verdadero o falso (Bool) según sean o no anagramas.
    - Un Anagrama consiste en formar una palabra reordenando TODAS
      las letras de otra palabra inicial.
    - NO hace falta comprobar que ambas palabras existan.
    - Dos palabras exactamente iguales no son anagrama.
*/

int anagramaCheck(char wordOne[], char wordTwo[]);
void abc(char word[]);
char lowerCase(char letter);

char palabra1[10];
char palabra2[10];


int main(){
    printf("Ingresa dos palabras para comprobar si son un anagrama\n");
    printf("Ingresa tu nombre: ");
    scanf(" %[^\n]",palabra1);                        //Los [] en las expresiones regulares SOLO UN CARACTER
    printf("Ingresa tu apellido: ");
    scanf(" %[^\n]",palabra2);

    printf("Las palabras ingresadas son: %s, %s\n",palabra1,palabra2);
    anagramaCheck(palabra1,palabra2);
    
    return 0;
}

int anagramaCheck(char wordOne[], char wordTwo[]){
    
    int i = 0; 
    char letter;
    
    //convertir a minusculas
    i = 0;

    while(wordOne[i] != '\0' && wordTwo[i] != '\0'){
        wordOne[i] = lowerCase(wordOne[i]); 
        wordTwo[i] = lowerCase(wordTwo[i]); 
        i++;
    }


    //ordenar 1er palabra;
    i = 0;

    while(wordOne[i + 1] != '\0'){
        if(wordOne[i] > wordOne[i + 1]){
            letter = wordOne[i];
            wordOne[i] = wordOne[i + 1];
            wordOne[i + 1] = letter;
            i = 0 ;
        }
        else{
            i++;
        }
    }

    //ordenar 2da palabra;
    i = 0;

    while(wordTwo[i + 1] != '\0'){
        if(wordTwo[i] > wordTwo[i + 1]){
            letter = wordTwo[i];
            wordTwo[i] = wordTwo[i + 1];
            wordTwo[i + 1] = letter;
            i = 0 ;
        }
        else{
            i++;
        }
    }

    //comparar ambas palabras
    i = 0;

    while(wordOne[i] != '\0' && wordTwo[i] != '\0'){
        if(wordOne[i] == wordTwo[i]){
            i++;
        }
        else{
            printf("Las palabras NO son un Anagrama...\n");
            return 0;
        }
    }

    printf("Las palabras SI son un Anagrama...\n");

    return 0;
    

}

void abc(char word[]){
    int i = 0; 
    char letter;
    
    //printf("%s\n",word);

    while(word[i + 1] != '\0'){
        if(word[i] > word[i + 1]){
            letter = word[i];
            word[i] = word[i + 1];
            word[i + 1] = letter;
            i = 0 ;
        }
        else{
            i++;
        }
    }

    //printf("%s\n",word);
    
}

char lowerCase(char letter){
    if(letter >= 'A' && letter <= 'Z'){
        letter = letter + 32;
    }
        return letter;
}
    