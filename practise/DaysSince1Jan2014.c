#include <stdio.h>

int computeDays(int day, int month);

int main(void){
	int day,month;

	printf("Enter day and month: ");
	scanf("%d %d",&day,&month);


	printf("Day %d of month %d is the %dth day of 2014.\n",day,month,computeDays(day,month));
	 
	return 0;

}

int computeDays(int day ,int month){

	switch(month){
		case 1:
			return day;
		case 2:
			return 31+day;
		case 3:
			return 31+28+day;
		case 4:
			return 31+28+31+day;
		case 5:
			return 31+28+31+30+day;
		case 6:
			return 31+28+31+30+31+day; 
		case 7:
			return 31+28+31+30+31+30+day;
		case 8:
			return 31+28+31+30+31+30+31+day;
		case 9:
			return 31+28+31+30+31+30+31+31+day;
		case 10:
			return 31+28+31+30+31+30+31+31+30+day;
		case 11:
			return 31+28+31+30+31+30+31+31+30+31+day;
		case 12:
			return 31+28+31+30+31+30+31+31+30+31+30+day;
	}
	return 0;
}

