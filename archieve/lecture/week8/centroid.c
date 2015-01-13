#include <stdio.h>

void centroid (float[], float[], float*, float*);
int main(void){
	int i;
	float centroid_x,centroid_y,x_array[3],y_array[3] ;

	for (i = 0; i < 3; i++){

		printf("Cordinates of %d vertext: ", i+1);
		scanf("%f %f",x_array[i] ,y_array[i] );

	}




	return 0;
}

void centroid(float x[], float y[], float *centx_ptr, float *centy_ptr){
	int i;
	for (i = 0 ; i < 3; i++){
		*centx_ptr+=x[i];
		*centy_ptr+=y[i];
	}
	*centx_ptr/=3;
	*centy_ptr/=3;

}
