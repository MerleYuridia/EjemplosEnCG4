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

/* se declara las variables correspondientes */
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
	
	/* Se asigna valor a la variable suma */
	suma = (numE + numF);
	/* Se muestra el resultado final */
	printf ( " \n Resultado de la SUMA de: % d + % .2f = % .2f \n " , numE, numF, suma);

	/* Se asigna valor a la variable resta */
	resta = (numE - numF);
	/* Se muestra el resultado final */
	printf ( " \n Resultado de la RESTA de: % d - % .2f = % .2f \n " , numE, numF, resta);
	
	/* Se asigna valor a la variable mult */
	mult = (numE * numF);
	/* Se muestra el resultado final */ 
	printf ( " \n Resultado de la MULTIPLICACION de: % d x % .2f = % .2f \n " , numE, numF, mult);
	
	/* Se asigna valor a la variable div */
	div = (numE / numF);
	/* Se muestra el resultado final */
	printf ( " \n Resultado de la DIVISION de: % d / % .2f = % .2f \n \n " , numE, numF, div );
	
	return  0 ;
}