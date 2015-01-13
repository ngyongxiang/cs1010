// points.c
// This program reads a list of points, sorts them by x-coordinates
// and y-coordinates, and computes the total length of horizontal and
// vertical lines if we trace the points in the sorted list.
// Aaron Tan
#include <stdio.h>
#define MAX_POINTS 20

typedef struct {
	int x, y; // x- and y-coordinates of a point
} point_t;

void scanPoints(point_t [], int *);
void printPoints(point_t [], int);
void sortPoints(point_t [], int);
int lessThan(point_t [], int, int);
int traceLines(point_t [], int);

int main(void) {
	point_t points[MAX_POINTS];
	int num_points; // number of points

	scanPoints(points, &num_points);

	sortPoints(points, num_points);

	printf("After sort:\n");
	printPoints(points, num_points); // for checking

	printf("Sum of lengths of vertical and horizontal lines = %d\n",
	       traceLines(points, num_points));

	return 0;
}

// Read data for points and assign to arrays x and y
void scanPoints(point_t pts[], int *size_ptr) {
	int i;

	printf("Enter number of points: ");
	scanf("%d", size_ptr);

	printf("Enter x- and y-coordinates of %d points:\n", *size_ptr);
	for (i=0; i<*size_ptr; i++) 
		scanf("%d %d", &pts[i].x, &pts[i].y);
}

// Print points
void printPoints(point_t pts[], int size) {
	int i;

	for (i=0; i<size; i++)
		printf("Point #%2d: (%d,%d)\n", i, pts[i].x, pts[i].y);
}

// Sort the points in ascending order of x-coordinates and
// then y-coordinates, using Selection Sort.
void sortPoints(point_t pts[], int size) {
	int i, start, min_index;
	point_t temp;


}

// Returns 1 if point at index p is "less than" point at index q; 
// otherwise returns 0.
// Point at index p is "less than" point at index q if the former
// has a smaller x-coordinate, or if their x-coordinates are the 
// same, then the former has a smaller y-coordinate.
int lessThan(point_t pts[], int p, int q) {

	return 1; // this is a stub
}

// Trace lines on points in sorted array and compute the 
// sum of lengths of horizontal and vertical lines
int traceLines(point_t pts[], int size) {

	return 123; // this is a stub
}

