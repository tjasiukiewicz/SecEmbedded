// Uwaga program zawiera błędy i zachowania niezdefiniowane


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a; // Zmienna nie jest zainicjalizowana!
	printf("%d\n", a); 

	float b = 145.54; // 145.54 jest typu doble!
	printf("%f\n", b);


	int * data = malloc(100); // Wyciek pamięci! Nie jest zwolniona przez free(...)!
	printf("%d\n", data[10]);
	//free(data);

	return 0;
}

