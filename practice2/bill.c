#include <stdio.h>
#define SRC_RATE 0.1
#define GST_RATE 0.07

int main(void){
	float price,service_charge,gst,total;
	
	printf("Enter menu price: $)");
	scanf("%f", &price );

	service_charge = price * SRC_RATE;
	total = price + service_charge;

	gst = total * GST_RATE;
	
	total += gst;

	printf( "10\% Server Charge $%.2f\n"
		    "7\% GST: $%.2f\n"
			"Your total bill: $%.2f\n",
			service_charge,gst,total);	


}
