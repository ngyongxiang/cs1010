// points.c
// This program reads a list of points, sorts them by x-coordinates
// and y-coordinates, and computes the total length of horizontal and
// vertical lines if we trace the points in the sorted list.
#include <stdio.h>
#define MAX_POINTS 20

int scanPoints(int [], int []);
void printPoints(int [], int [], int);
void sortPoints(int [], int [], int);
int lessThan(int [], int [], int, int);
int traceLines(int [], int [], int);

int main(void) {
	int x[MAX_POINTS], y[MAX_POINTS]; // x- and y-coordinates of points
	int num_points; // number of points

	num_points = scanPoints(x, y);
	// printf("Before sort:\n");
	// printPoints(x, y, num_points); // for checking

	sortPoints(x, y, num_points);

	printf("After sort:\n");
	printPoints(x, y, num_points); // for checking

	printf("Sum of lengths of vertical and horizontal lines = %d\n",
	       traceLines(x, y, num_points));

	return 0;
}

// Read data for points and assign to arrays x and y.
// Return number of points read.
int scanPoints(int x[], int y[]) {
	int size, i;

	printf("Enter number of points: ");
	scanf("%d", &size);

	printf("Enter x- and y-coordinates of %d points:\n", size);
	for (i=0; i<size; i++) 
		scanf("%d %d", &x[i], &y[i]);

	return size;
}

// Print points
void printPoints(int x[], int y[], int size) {
	int i;

	for (i=0; i<size; i++) {
		printf("Point #%2d: (%d,%d)\n", i, x[i], y[i]);
	}
}

// Sort the points in ascending order of x-coordinates and
// then y-coordinates, using Selection Sort.
void sortPoints(int x[], int y[], int size) {
	int i, start, min_index, temp;

	// Fill in the code

}

// Returns 1 if point at index p is "less than" point at index q; 
// otherwise returns 0.
// Point at index p is "less than" point at index q if the former
// has a smaller x-coordinate, or if their x-coordinates are the 
// same, then the former has a smaller y-coordinate.
int lessThan(int x[], int y[], int p, int q) {

	return 1; // this is a stub

}

// Trace lines on points in sorted array and compute the 
// sum of lengths of horizontal and vertical lines.
int traceLines(int x[], int y[], int size) {

	return 123; // this is a stub
}

