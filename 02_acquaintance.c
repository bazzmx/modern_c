/* Este programa genera un bucle infinito si se agrega un número entero,
 * de otra forma imprime "Hola mundo!" y se detiene */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char* argv[argc+1]) {
	puts("¡Hola mundo!");
	if (argc > 1) {
		while (true) {
			puts("Algunos programas nunca se detienen");
		}
	} else {
		do {
			puts("Pero este sí");
		} while (false);
	}
	return EXIT_SUCCESS;
}
