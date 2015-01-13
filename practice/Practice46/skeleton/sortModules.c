// Week11_SortModules.c
#include <stdio.h>
#include <string.h>

#define MAX_MODULES 10   // maximum number of modules
#define CODE_LENGTH 7    // length of module code

int scanModules(char [][CODE_LENGTH+1], int []);
void printModules(char [][CODE_LENGTH+1], int [], int);
void sortByEnrolment(char [][CODE_LENGTH+1], int [], int);

int main(void) {
	char codes[MAX_MODULES][CODE_LENGTH+1];    // module codes
	int enrolments[MAX_MODULES];    // enrolment in each module
	int num_modules;

	num_modules = scanModules(codes, enrolments);
	sortByEnrolment(codes, enrolments, num_modules);
	printModules(codes, enrolments, num_modules);

	return 0;
}

// Read number of modules, and for each module, the module codes and enrolment figures.
// Return number of modules.
int scanModules(char codes[][CODE_LENGTH+1], int enrolments[]) {
	int size, i;

	printf("Enter number of modules: ");
	scanf("%d", &size);

	printf("Enter module codes and student enrolment:\n");
	for (i=0; i<size; i++) 
		scanf("%s %d", codes[i], &enrolments[i]);

	return size;
}

// Print module codes and enrolment figures
void printModules(char codes[][CODE_LENGTH+1], int enrolments[], int size) {
	int i;

	printf("Sorted by student enrolment:\n");
	for (i=0; i<size; i++)
		printf("%s\t%3d\n", codes[i], enrolments[i]);
}

// Sort by enrolment in each module
// This uses Selection Sort
void sortByEnrolment(char codes[][CODE_LENGTH+1], int enrolments[], int size) {

	// Fill in the code


}

