/* Nombre del programa: operaciones aritméticas con variables de diferentes tipos (S1)
  Autora: Merle Yuridia Meza Nava
  Descripcion: El programa debe de estar comentado para tú “yo del futuro” 
  • Declara una variable de tipo entero. Con valor asignado 
  • Declara una variable de tipo decimal (float). Con valor asignado 
  • Con esas variables realiza las operaciones aritméticas básicas (suma, resta multiplicación y división). 
  • Imprime el resultado de cada operación de manera ordenada
*/
/ * Bibliotecas * /
#include  < stdio.h >

/* declara las variables */
int numE;
float numF;
flotante suma, resta, mult, div;
/ * Estructura principal * /

int  main ()
{
	/* Se imprime en el titulo del programa*/
	printf ( "\n\t Operaciones aritmeticas con variables de diferentes tipos \n" );
	
	/* Se solicita un numero entero */
	printf ( " Ingresa un numero entero: " );
	scanf ( " % d " , & numE);
	
	/* Se solicita del un numero decimal=flotante */
	printf ( " Ingresa un numero decimal: " );
	scanf ( " % f " , & numF);
	
	
	suma = (numE + numF); /* Se asigna valor a la variable suma */
	
	printf ( " \n Resultado de la SUMA de: % d + % .2f = % .2f \n " , numE, numF, suma); /* Se muestra el resultado final */

	
	resta = (numE - numF); /* Se asigna valor a la variable resta */
	
	printf ( " \n La RESTA de: % d - % .2f = % .2f \n " , numE, numF, resta); /* Se muestra el resultado final */
	
	
	mult = (numE * numF); /* Se asigna valor a la variable mult */
	
	printf ( " \n La MULTIPLICACION de: % d x % .2f = % .2f \n " , numE, numF, mult); /* Se muestra el resultado final */ 
	
	
	div = (numE / numF);  /* Se asigna valor a la variable div */
	
	printf ( " \n La DIVISION de: % d / % .2f = % .2f \n \n " , numE, numF, div ); /* Se muestra el resultado final */
	
	return  0 ;
}