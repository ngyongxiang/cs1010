#include <stdio.h>
#include <sting.h>
struct rectangle_t 
{
	int side1;
	int side2;

};
int main(void){

	struct rectangle_t rect;
	int perimeter;	
	

	printf("Enter lengths: ");
	scanf ("%d%d", &rect.side1, &rect.side2);
	rect.perimeter = (rect.side1+rect.side2) *2;
	
	if (rect.side1 > rect.side2){

		perimeter = rect.side1+ 2 * rect.side2;
	}else{
		perimeter = rect.side2 + 2 *rect.side1;

	}


	printf("Perimeter = %d\n", perimeter);
	return 0;



}
