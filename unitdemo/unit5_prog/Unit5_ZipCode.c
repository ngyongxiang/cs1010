// Unit5_ZipCode.c
#include <stdio.h>

int main(void) {    
	int zip;

	printf("Enter a 6-digit ZIP code: ");
	scanf("%d", &zip);

	switch (zip/100000) {

		case 0: case 2: case 3:
			printf("%06d is on the East Coast.\n", zip);
			break;
		case 4: case 5: case 6:
			printf("%d is in the Central Plains.\n", zip);
			break;
		case 7:
			printf("%d is in the South.\n", zip);
			break;
		case 8: case 9:
			printf("%d is in the West.\n", zip);
			break;
		default:
			printf("%d is invalid.\n", zip);

	} // end switch

	return 0;
}

