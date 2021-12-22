/* Nombre del programa: operaciones aritméticas con variables de diferentes tipos (S1)
  Autora: Merle Yuridia Meza Nava
  Descripcion: El programa debe de estar comentado para tú “yo del futuro” 
  • Declara una variable de tipo entero. Con valor asignado 
  • Declara una variable de tipo decimal (float). Con valor asignado 
  • Con esas variables realiza las operaciones aritméticas básicas (suma, resta multiplicación y división). 
  • Imprime el resultado de cada operación de manera ordenada
*/

# include  < stdio.h >

/* Estructura principal */
int  main () {
    
    /* Se declara la variable de tipo entero y se le asigna un valor */
    int numEntero = 30 ;

    /* Se declara la variable de tipo decimal y se le asigna un valor */
    float numDecimal = 6.3 ;

    / * Se elabora la operación: suma * /
    float suma = numEntero + numDecimal;

    / * Se elabora la operación: resta * /
    float resta = numEntero - numDecimal;

    / * Se elabora la operación: multiplicación * /
    float multiplicacion = numEntero * numDecimal;

    / * Se elabora la operación: división * /
    división flotante = numEntero / numDecimal;

    / * Se imprimen los resultados de cada operación * /
    printf ( " Con los numeros % d y % f se realizaron las siguientes operaciones: " , numEntero, numDecimal);
    printf ( " \n \n \t Suma: % d + % f = % f " , numEntero, numDecimal, suma);
    printf ( " \n \t Resta: % d - % f = % f " , numEntero, numDecimal, resta);
    printf ( " \n \t Multiplicación: % d * % f = % f " , numEntero, numDecimal, multiplicacion);
    printf ( " \n \t División: % d / % f = % f " , numEntero, numDecimal, division);
    printf ( " \n \n " );
    
    return  0 ;
}