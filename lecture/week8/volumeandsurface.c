#include <stdio.h>

void volume_and_surface(int,int, int , float* , float*);
int main(void){
	int length, width, depth;
	float volume,surface;

	printf("Enter length, width and dept: " );
	scanf("%d %d %d",&length,&width,&depth);
	volume_and_surface(length, width, depth, &volume, &surface);
	
	printf("Volme is  : %.2f\n Surface area is : %.f\n", volume, surface);
	
	return 0;

}

void volume_and_surface(int length, int width, int depth, float *vol_ptr, float *surface_ptr){

	float v,s;
	v = (float)length * width * depth;
    *vol_ptr = v;

	s = 2.0 * ((length * width) +( width * depth)+ (length * depth));
	*surface_ptr = s;


}
