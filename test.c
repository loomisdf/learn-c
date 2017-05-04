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
	unsigned int word = 5;
	struct Car c1;
	struct Car c2;

	c1.fuel_level = 100;
	c1.num_doors = 4;
	c2.fuel_level = 200;
	c2.num_doors = 5;

	char* str = "hello";

	int x = 20;
	int *numptr = NULL;
	numptr = &x;

	printf("%p\n", numptr);

	char str_test[] = { 'H', 'e', 'l', 'l', 'o', '\0' };

	//printf("%s\n", str_test);

	printf("%d\n", word);

	return 0;
}
