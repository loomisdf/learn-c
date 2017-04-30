#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Car {
	int fuel_level;
	int num_doors;
} car;

int string_length(char* s) {
	const char *sc;
	for(sc = s; *sc != '\0'; sc++){}

	return sc - s;
}

int main(int argc, char* argv[]) {
	struct Car c1;
	struct Car c2;

	c1.fuel_level = 100;
	c1.num_doors = 4;
	c2.fuel_level = 200;
	c2.num_doors = 5;

	int *num = malloc(sizeof(int) * 5);
	num[0] = 10;
	num[1] = 20;

	char* str = "hello";

	printf("Fuel level: %d\nNumber of doors: %d\n", c1.fuel_level, c1.num_doors);
	printf("Fuel level: %d\nNumber of doors: %d\n", c2.fuel_level, c2.num_doors);
	printf("%d\n", *num);
	printf("%d\n", num[1]);

	printf("%d\n", string_length(str));
	printf("%d\n", string_length(""));

	free(num);

	return 0;
}
