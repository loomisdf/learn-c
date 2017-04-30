#include<stdio.h>

int main(int argc, char* argv[]) {

	if(argc < 2) {
		printf("ERROR: You need at least one argument.\n");
		return 1;
	}
	for(int k = 1; k < argc; k++) {
		printf("Argument %d: %s\n", k, argv[k]);

		for(int i = 0; argv[k][i] != '\0'; i++) {
			char letter = argv[k][i];

			// Convert uppercase letters to lowercase
			if(letter >= 'A' && letter <= 'Z') {
				letter += 32;
			}

			switch(letter) {
				case 'a':
					printf("%d: 'A'\n", i);
					break;

				case 'e':
					printf("%d: 'E'\n", i);
					break;

				case 'i':
					printf("%d: 'I'\n", i);
					break;

				case 'o':
					printf("%d: 'O'\n", i);
					break;

				case 'u':
					printf("%d: 'U'\n", i);
					break;

				case 'y':
					if(i > 2) {
						printf("%d: 'Y'\n", i);
					}
					break;

				default:
					printf("%d: %c is not a vowel\n", i, letter);
			}
		}
		printf("\n");
	}

	return 0;
}
