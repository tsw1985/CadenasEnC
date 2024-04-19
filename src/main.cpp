#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
/*
    char nombre[10];
    char apellido[20];
    char segundo_apellido[20];
    char espacio[2] = " "; 

    printf("Hola, escribe tu nombre\n");
    fgets(nombre,sizeof(nombre),stdin);
    nombre[strcspn(nombre, "\n")] = '\0'; // Elimina el carácter de nueva línea

    printf("Ahora tu primer apellido\n");
    fgets(apellido,sizeof(apellido),stdin);
    apellido[strcspn(nombre, "\n")] = '\0'; // Elimina el carácter de nueva línea

    printf("Ahora tu segundo apellido\n");
    fgets(segundo_apellido,sizeof(segundo_apellido),stdin);
    segundo_apellido[strcspn(segundo_apellido, "\n")] = '\0'; // Elimina el carácter de nueva línea

    // STRCAT() -> Añade a la primera variable nombre + espacio + apellido ... concatenar cadenas
    strcat(nombre,espacio); 
    strcat(nombre,apellido);
    strcat(nombre,espacio);
    strcat(nombre,segundo_apellido);
    printf("NOMBRE COMPLETO %s\n",nombre);

    //Copiamos a copia de nombre la cadena nombre
    char copia_nombre[50] ;
    strcpy(copia_nombre,nombre);
    printf("COPIA DE NOMBRE %s\n",copia_nombre);

    //Buscar un caracter strchr()
    char letra;
    printf("INTRODUCE LETRA");
    scanf("%c",&letra);

    printf("LA LETRA ESCRITA FUE %c y la voy a ir a buscar\n",letra);
    //strchr() devuelve un puntero con la letra encontrada
    char *letraEncontrada = strchr(copia_nombre,letra);
    if (letraEncontrada == NULL){
        printf("No se encuentra la letra\n");
    }else{
        printf("La letra encontrada fue %c y está en la posicion %d \n",*letraEncontrada);   
    }*/
    
    //strcmp()
    //Compara cadenas alfabeticamente.
    char cadena1[] = "a";
    char cadena2[] = "A";
    int result = strcmp(cadena1,cadena2);
    printf("El resultado de la comparacion es %d\n",result);

    //strcspn() Buscar caracter en cadena. indexOf()
    char cadena3[] = "Hi,how are you? Im fine";
    char letra[] = "o";
    
    int position = strcspn(cadena3,letra);
    printf("La letra %s está en la posicion %d\n",letra,position);

    //strlen() : Devuelve la longitud en bytes de la cadena sin el final nullo
    printf("La cadena3 tiene una longitud %d\n",(int)strlen(cadena3));

    //Buscamos letra ahora con scanf
    printf("Escribe una letra para buscar\n");
    scanf("%s",letra);
    printf("Vas a buscar la letra %s\n",letra);

    position = strcspn(cadena3,letra);
    printf("La letra %s escrita con el teclado está en la posicion %d\n",letra,position);



    //strncat() : 



    


  

    return 0;
}

