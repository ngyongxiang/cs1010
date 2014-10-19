// Unit10_ClassEnrolment.c
#include <stdio.h>
#define MAX_CLASSES 10
#define MAX_STUDENTS 30

void readInputs(int enrol[][MAX_STUDENTS], int numClasses, int numStudents);
void printArray(int enrol[][MAX_STUDENTS], int numClasses, int numStudents);
int classWithMostStudents(int enrol[][MAX_STUDENTS], int numClasses, int numStudents);
void busiestStudents(int enrol[][MAX_STUDENTS], int numClasses, int numStudents);

int main(void) {
	int enrol[MAX_CLASSES][MAX_STUDENTS] = { {0} };
	int numClasses, numStudents;

	printf("Number of classes and students: ");
	scanf("%d %d", &numClasses, &numStudents);

	readInputs(enrol, numClasses, numStudents);
	printArray(enrol, numClasses, numStudents);

	printf("Class %d has the most students.\n",
	       classWithMostStudents(enrol, numClasses, numStudents));

	busiestStudents(enrol, numClasses, numStudents);

	return 0;
}

// Read data into array enrol
void readInputs(int enrol[][MAX_STUDENTS], int numClasses, int numStudents) {
	int entries;   // number of data entries
	int i, class, student; 

	printf("Number of data entries: ");
	scanf("%d", &entries);

	printf("Enter %d data entries (student class): \n", entries);
	// Read data into array enrol
	for (i = 0; i < entries; i++) {
		scanf("%d %d", &student, &class);
		enrol[class][student] = 1;
	}
}

// Print array enrol for checking purpose
void printArray(int enrol[][MAX_STUDENTS], int numClasses, int numStudents) {
	int r, c; // row and column indices

	for (r = 0; r < numClasses; r++) {
		for (c = 0; c < numStudents; c++) 
			printf("%3d", enrol[r][c]);
		printf("\n");
	}
}

// Find one class with most students
int classWithMostStudents(int enrol[][MAX_STUDENTS], int numClasses, int numStudents) {
	int classSizes[MAX_CLASSES];
	int r, c; // row and column indices
	int maxClass, i;

	for (r = 0; r < numClasses; r++) {
		classSizes[r] = 0;
		for (c = 0; c < numStudents; c++) 
			classSizes[r] += enrol[r][c];
	}

	// find the one with most students
	maxClass = 0;  // assume class 0 has the most students first
	for (i = 1; i < numClasses; i++)
		if (classSizes[i] > classSizes[maxClass]) 
			maxClass = i;

	return maxClass;
}

// Find the busiest students -- students who are enrolled in all classes
void busiestStudents(int enrol[][MAX_STUDENTS], int numClasses, int numStudents) {
	int sum; 
	int r, c;

	printf("Students who take all classes: ");
	for (c = 0; c < numStudents; c++) {
		sum = 0;
		for (r = 0; r < numClasses; r++) 
			sum += enrol[r][c];
		if (sum == numClasses)
			printf("%d ", c);
	}
	printf("\n");
}
