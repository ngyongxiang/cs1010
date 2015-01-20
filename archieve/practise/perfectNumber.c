// perfectNumber.c 
// Repeatedly reads a non-negative value, and stops when zero is read.
// For each positive value read, it checks if the value is a perfect number.

#include <stdio.h>

int is_perfect(int);
int sum_prop_divsor(int);


int main(void) {
	int num;
	//precon: input should not be string.
	do{
		printf("Enter number: ");
		scanf("%d", &num);

		if (num>0){
			if (is_perfect(num))
				printf("%d is a perfect number.\n",num);
			else 
				printf("%d is not a perfect number.\n",num);

		}
	}while(num!=0);

	return 0;
}

int is_perfect(int num){

	//is perfect sum of all its positive divisors.
	if (num==sum_prop_divsor(num)){
		return 1;
	}
	return 0;

}

int sum_prop_divsor(int num){
	//a positive divisor is possitive,smaller then num, and divisible by num.positive divisors of 20 are 1,2,4,5,10 and 20.all except 20 are proper divisors. 
	int i=1,sum=0;
	for (i=1;i<=num/2;i++){
		if (num%i==0)
			sum+=i;
	} 

	//if is not a possitive divisor, then just return 0;else return that number.

	return sum; 
}

int a = 10, b = 200;

while ((a*a) < (a+b)) {
    printf("a = %d, b = %d\n", a, b);
    a++; 
    b+=10;
}

int x, y, count = 0;

for (x = 1; x <= 6; x++)
    for (y = x + 1; y <= 6; y++)
        count++;

printf("count = %d\n", count);



x        y				count
1 	     2,3,4,5,6       5
2        3,4,5,6         4
3        4,5,6           3
4        5,6             2
5        5               1
