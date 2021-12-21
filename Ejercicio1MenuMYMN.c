/ * Nombre del programa: Imprimir Menu numerico 
    Autor: Merle Yuridia Meza Nava 
    Descripcion: Utiliza la instrucción si para cada opción. En cada opción se debe imprimir el mensaje "ha seleccionado la opción: #de opción"
* /
/ * Bibliotecas * /
# include < stdio.h >

/ * Estructura principal * /
int main () 
{
/ * Se declara el enetero a utilizar para que el usuario ingrese una opcion del menu * /
 int opcion; 
 
 / * se elabora el menu * /
 
  printf ("\ t MENÚ \ n \ n");
    printf ("1. Primera opción \ n");
    printf ("2. Segunda opción \ n");
    printf ("3. Tercera opción \ n \ n");
    / * printf ("4. Salir \ n"); * /
    printf ("Ingrese una opcion:");
    
    / * Se lee la opción elegida * /
    scanf ("% d", & opcion);
    
    / * El usuario elige la primera opción * /
    si (opcion == 1) {
        printf ("Ha seleccionado la opción: 1 \ n");
    }

    / * El usuario elige la segunda opción * /
    si (opcion == 2) {
        printf ("Ha seleccionado la opción: 2");
    }
    
    / * El usuario elige la tercera opción * /
    si (opcion == 3) {
        printf ("Ha seleccionado la opción: 3");
    }
    
    / * El usuario elige la cuarta opción
    si (opcion == 4) {
        return 0;
    } * /

    printf ("\ n \ n");

    return 0;
}