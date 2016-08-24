#include <stdio.h>

float convertToCelsius(float fahr, float celsius);

int main() {
	printf("%4s %6s\n", "fahr", "cels");
	for(int i = 0; i < 300; i++) {
		printf("%4.0f %6.1f\n", i, convertToCelsius(i));
	}
}

convertToCelsius(float fahr, float celsius) {
	return (5.0/9.0) * (fahr-32.0);
}
