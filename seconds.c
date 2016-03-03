/*
Ilustra el operador de módulo
Recibe un número de segundos y lo convierte a horas,
minutos y segundos
*/

#include <stdio.h>

/* Define constantes */

#define SECS_PER_MIN 60
#define SECS_PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

main()
{
	/* Recibe el número de segundos */

	printf("Enter number of seconds (< 65000): ");
	scanf("%d", &seconds);

	hours = seconds / SECS_PER_HOUR;
	minutes = seconds / SECS_PER_MIN;
	mins_left = minutes % SECS_PER_MIN;
	secs_left = seconds % SECS_PER_MIN;

	printf("%u seconds is equal to :\n", seconds );
	printf("%u h, %u m, and %u s\n", hours, mins_left, secs_left );
	return 0;
}	
