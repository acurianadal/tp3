/* hacer el programa de ºF a ºC aplicando const usando getCelcius(ºF) aplicando for.
 * 27/04/2015
 * Alan Kevin Curia Nadal
*/
#include <stdio.h>

const int inc=20;
const int max=300;

main(void){
	for (int farenheit=0; farenheit<=max; farenheit + inc) {
		printf("%d\t%7.2f\n", farenheit, getCelcius(farenheit));
	}
}

/* calcular grados centigrados convirtiendlos desde farenheit*/
float getCelcius(int a) {
	float celcius = (5.0/9.0*(a-32));
	return (celcius);
}

