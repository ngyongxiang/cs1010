#include <stdio.h>

// given 3 intergers a, b , c (l,w,h)
// write area_and_volume to compute surface area and volume
// read 2 positive integers lower and upper, where lower < upper .

// count how many boxes with length, width and height in the range [lower,upper] 
// such that the surface area is larger than or equal to the volume.



void area_and_volume(int *a, int *b, int *c, float *area, float *volume);
int is_increasing(int a,int b,int c);

int main(void){
	int a , b , c;
	float area,volume;
	area_and_volume(&a, &b ,&c,&area,&volume);



	int lower, upper;

	printf("Enter lower and upper limits: ");
	scanf("%d %d", &lower, &upper);

	int i,k,j, counter= 0 ;
	for (i = lower; i <= upper ; i ++) {
		for (k = lower; k <= upper ; k++){
			for (j = lower; j <= upper ; j++){
				area_and_volume(&i,&k,&j,&area,&volume);
				if (( area >= volume) && (is_increasing(i,k,j)))
					counter ++;
			}
		}

	}

	printf("Answer = %d\n", counter);

	return 0;
}

void area_and_volume(int *a, int *b, int *c, float *area, float *volume){
	*area = (*a * *b + *b * *c + *c * *a ) * 2.0;
	*volume = (float)*a * *b * *c;

}


int is_increasing(int a,int b,int c){
	if (a <=b && b <= c && c>= a){
		return 1;
	}
	return 0;
}
