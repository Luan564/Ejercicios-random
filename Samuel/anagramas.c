#include <stdio.h> 
#define TRUE 1
#define FALSE 0
#define BOOLEAN int

char string1[30];
char string2[30];

BOOLEAN anagramas(char *, char *, int tam);

void main()
{
    int i = 0;
    printf("Ingresa string1\n");
    scanf("%[^\n]",string1);
    printf("Ingresa string2\n");
    scanf(" %[^\n]",string2);
    for(i = 0; string1[i] != '\0'; i++) {}
    int tam1 = i;
    for(i = 0; string2[i] != '\0'; i++) {}
    int tam2 = i;
    if(tam1 == tam2)
    {
        if( anagramas(string1, string2, tam1) )
            printf("Anagrama\n");   
        else
            printf("No anagrama\n");
    }
    else
        printf("No anagrama\n");
}

BOOLEAN anagramas(char string1[],char string2[], int tam)
{
    int bandera = 0, i = 0, j = 0;
    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            if(string2[j] == string1[i])
            {
                string2[j] = '0';
                bandera++;
                break;
            }
        }
    }
    if(bandera == tam)
        return TRUE;
    else
        return FALSE;
}
