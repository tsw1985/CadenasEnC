#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{

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
    }

    
    
    //strcmp()
    //Compara cadenas alfabeticamente.
    char cadena1[] = "a";
    char cadena2[] = "A";
    int result = strcmp(cadena1,cadena2);
    printf("El resultado de la comparacion es %d\n",result);

    //strcspn() Buscar caracter en cadena. indexOf()
    char cadena3[] = "Hi,how are you? Im fine";
    char letra2[] = "o";
    
    int position = strcspn(cadena3,letra2);
    printf("La letra %s está en la posicion %d\n",letra2,position);

    //strlen() : Devuelve la longitud en bytes de la cadena sin el final nullo
    printf("La cadena3 tiene una longitud %d\n",(int)strlen(cadena3));

    //Buscamos letra ahora con scanf
    printf("Escribe una letra para buscar\n");
    scanf("%s",letra2);
    printf("Vas a buscar la letra %s\n",letra);
    position = strcspn(cadena3,letra2);
    printf("La letra %s escrita con el teclado está en la posicion %d\n",letra2,position);
    


    //strncat() : Añade los primeros X caracteres de cadena1 a cadena2
    char cadena4[] = "Hola que haces";
    char cadena5[] = " Esto ira detrás";
    strncat(cadena4,cadena5,5);
    printf("Las cadenas pegadas quedan así %s\n",cadena4);

    char cadena6[] = "Hola que haces";
    char cadena7[] = " Esto ira detrás";

    char *cadenasSumadas = strncat(cadena6,cadena7,7);
    printf("Las cadenas pegadas quedan así %s\n",cadenasSumadas);

    //strncpy() : Copia N caracteres desde el inicio de cadena 1 a cadena 2
    char cadena8[] = "ABCDE";
    char cadena9[] = "fghikj";
    strncpy(cadena8,cadena9,2);
    printf("LA CADENA8 queda: %s\n",cadena8);
    
    //strstr() : Devuelve un puntero a la primera ocurrencia
    //           devuelve desde que encuentra la primera letra hacia delante
    char cadena10[] = "Soy cadena 10";
    char *letraCadena10;
    letraCadena10 = strstr(cadena10,"e");
    printf("CADENA 10 letra ---> : %s\n",letraCadena10);

    //strtok()  split();
    char cadena11[] = "Soy cadena 11 y tengo palabras separadas por espacios en blanco";
    char buscado[] = " ";
    char *encontrado;
    encontrado = strtok(cadena11,buscado);
    while(encontrado != NULL){
        printf("%s\n",encontrado);
        encontrado = strtok(NULL," ");
    }


    //strtok()  split(); con entrada teclado
    char cadena11[20];
    char buscado[2]; //espacio para el caracter y para el \n al pulsar intro

    char *encontrado;
    printf("Escribe que quieres dividir\n");
    fgets(cadena11,sizeof(cadena11),stdin);
    cadena11[strcspn(cadena11, "\n")] = '\0'; // Elimina el carácter de nueva línea

    printf("¿ Por que caracter ?\n");
    fgets(buscado,sizeof(buscado),stdin);
    buscado[strcspn(buscado, "\n")] = '\0'; // Elimina el carácter de nueva línea
    
    encontrado = strtok(cadena11,buscado);
    while(encontrado != NULL){
        printf("%s\n",encontrado);
        encontrado = strtok(NULL," ");
    }
    //fin entrada teclado


    //atof() : Cadena a float
    double valor1 = atof("45");
    printf("NUMERO -> %f\n",valor1);

    // atoi() : string a int
    int valor2 = atof("45");
    printf("NUMERO INT -> %d\n",valor2);

    // strlwr() : Convierte a minusculas una cadena
    char cadena12[] = "esto es en minusculas";
    strdup(cadena12);
    printf("%s\n",cadena12);

    //sprintf() : Mete en un buffer una cadena de caracteres
    char buffer1[20];
    char leidoDeTeclado[20];
    printf("¿ Escribe que quieres almacenar en la variable:\n");
    fgets(leidoDeTeclado,sizeof(leidoDeTeclado),stdin);
    leidoDeTeclado[strcspn(leidoDeTeclado, "\n")] = '\0'; // Elimina el carácter de nueva línea
    printf("LEIDO DE TECLADO %s\n",leidoDeTeclado);
    sprintf(buffer1,"%s",leidoDeTeclado); //mete dentro de buffer1 lo que había por teclado
    printf("LO QUE HAY EN EL BUFFER ES %s\n",buffer1);




    













    


  

    return 0;
}

