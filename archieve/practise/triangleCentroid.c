#include <stdio.h>
#define ROW 3
#define COL 2
// a median is a line that connects a vertex to the midpoint of its opposite side. 
// the intersection of the 3 medians is called the centroid.

// read in the cordinates of the 3 certices of a triangle and computer the cordinates of its centroid.
void read_vertex(float arr[][COL]);
void centroid (float arr[][COL],float *x, float *y);

int main(void){
	float centroid_x,centroid_y;
	float arr[ROW][COL];
	read_vertex(arr);
	centroid(arr,&centroid_x,&centroid_y);
	
	printf("Coordinates of centroid = (%.2f, %.2f)\n", centroid_x,centroid_y);

	return 0;
}


void read_vertex(float arr[][COL]){
	int row, col;
	for (row = 0 ;row <ROW; row ++){
		if (row ==0 ) printf("Coordinates of 1st vertex: ");
		else if (row ==1) printf("Coordinates of 2nd vertex: ");
		else if (row ==2) printf("Coordinates of 3rd vertex: ");
		for (col = 0 ; col < 2 ; col ++){
			scanf("%f",&arr[row][col]);
		}

	}

}


void centroid (float arr[][COL],float *x, float *y){
	int i,k;
	
	for (i = 0; i< ROW; i++){
		*x+= arr[i][0];
		*y+= arr[i][1];
	}
	*x /=3;
	*y /=3;
}
