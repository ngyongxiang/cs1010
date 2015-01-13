#include <stdio.h>
#include <math.h>
void compute_AM_GM(int *n1,int *n2, int *n3, float *am, float *gm);
int main(void){
	int n1,n2,n3;
	float am,gm;

	printf("Enter 3 positive integers: ");
	compute_AM_GM(&n1,&n2,&n3,&am,&gm);	

	printf("Arithmetic mean = %.2f\n" ,am);
	printf("Geometric mean = %.2f\n" ,gm);

	return 0;
}

void compute_AM_GM(int *n1,int *n2, int *n3, float *am, float *gm){

	scanf("%d", n1);
	
	scanf("%d", n2);

	scanf("%d", n3);
	
	*am = (*n1+*n2+*n3)/3.0;
	*gm = pow((*n1 * *n2 * *n3),(1.0/3));

}


