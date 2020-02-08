/* Esto parece no tener sentido, pero en realidad es -*- modo: C -*- */
#include <stdlib.h>
#include <stdio.h>

/* La función principal del programa */
int main(void) {
	// Declaraciones
	double A[5] = {
		[0] = 9.0,
		[1] = 2.9,
		[4] = 2.E+25,
		[3] = .00007,
	};

	// "Procesamiento"
	for (size_t i = 0; i< 5; ++i) {
		printf("Elemento %zu es %g \tsu cuadrado es %g\n",
			i,
			A[i],
			A[i]*A[i]);
	}
	return EXIT_SUCCESS;
}
