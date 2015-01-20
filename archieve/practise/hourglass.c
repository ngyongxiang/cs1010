#include <stdio.h>
// read in 3 positive integers
// a and b are durations of two hour glasses, 
// c is duration you want to measure.
// * all values are in minutes

// program determines if you can measure duration c, using the hourglass
// if yes , determine the number of times you need to flip the two hourglassses
// such that the total number of flips is the minimum. 


// assume that only use one hourglass at a time. 


// if a = 4, b = 7,
// if c = 28;
//	 c =  (0 * a) + (4 * b);
//	 flips = 4;
// if c = 29;
//	 c = (2 * a) + (3 * b);
//   flips = 5;


int compute_flips(int, int, int,int *,int *);
int main(void){
	int interval1,interval2,target,flips1,flips2;

	printf("Enter 3 inputs: ");
	scanf("%d %d %d",&interval1,&interval2,&target);	
	if (compute_flips(interval1,interval2, target, &flips1, &flips2)){
		printf("Possible!\n");
		printf("%d flip(s) for %d-minute hourglass and %d flip(s) for %d-minute hourglass.\n", flips1,interval1,flips2,interval2);

	}else{
		printf("Impossible!\n");
	}
	return 0;
}

int compute_flips(int interval1,int interval2, int target, int *flips1, int *flips2){

	// increase the times from 1,2 .... until result < target for interval 1;
	// increase the times from 1, 2 , 3 until result < target for interval 2, 
	// for each value in interval 1, add it to inteveral 2, if the result == target,then take note i and k 
	// and return i and k.
	int i ,k, result1,result2,min_flips = 99999999,found=0;
	for (i = 0; (interval1 * i) <= target; i++){
		result1 = interval1 * i ;
		for (k = 0; (interval2 * k) <= target ; k++){
			result2 = interval2 * k;
			if (((result1 + result2) == target) && (i + k) < min_flips){
					*flips1 = i;
					*flips2 = k;
					min_flips = i + k;
					found = 1;
			}
		}
	}

	return found; // return 0 if not possible.
}


