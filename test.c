#include<stdio.h>
#include<stdlib.h>

struct Car {
	int fuel_level;
	int num_doors;
} car;

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

	printf("Fuel level: %d\nNumber of doors: %d\n", c1.fuel_level, c1.num_doors);
	printf("Fuel level: %d\nNumber of doors: %d\n", c2.fuel_level, c2.num_doors);
	printf("%d\n", *num);
	printf("%d\n", num[1]);

	free(num);

	return 0;
}
