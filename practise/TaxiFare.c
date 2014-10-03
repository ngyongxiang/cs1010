#include<stdio.h>
#include<math.h>

float computeFare(int dayType, int boardTime, int distance);

int main(void){
	
	int dayType,boardHour,boardMin,distance,boardTime;;

	printf("Day type: ");
	scanf("%d",&dayType);

	printf("Boarding hour and minute: ");
	scanf("%d %d",&boardHour,&boardMin);
	
	boardTime=boardHour*60+boardMin;
	
	
	
	printf("Distance: ");
	scanf("%d",&distance);

	
	printf("Boarding time is %d minutes\n",boardTime);

	printf("Total taxi fare is $%.2f\n",computeFare(dayType,boardTime,distance));

	return 0;


}
float computeFare(int dayType, int boardTime, int distance){
	float total_fare=0;;
	int distance_left=0;;
	float flag_down=3.40; // x<=1
	//basic fare
		total_fare+=flag_down;
		distance_left=distance-1000; //minus away first 1km

		if (distance_left>0){
			if(distance_left<=9200){
				total_fare+=(float)ceil((distance_left/400.0))*0.22;
			}else{
				total_fare+=(float)ceil((9200/400.0))*0.22;
				distance_left=distance_left-9200;
				if (distance_left>0){
					total_fare+=(float)ceil((distance_left/350.0))*0.22;

				}
			}
		}

	//surcharge
	if (boardTime>=0&&boardTime<360){
		//Midnight charge
		total_fare+=total_fare*0.5;
	}else if (boardTime>=360&&boardTime<570){
		//Morning peak hour charge
		if (dayType)
			total_fare+=total_fare*0.25;
	}else if (boardTime>=1080&&boardTime<1440){	
		//Night peak hour charge
		total_fare+=total_fare*0.25;
	}

	return total_fare;
}

