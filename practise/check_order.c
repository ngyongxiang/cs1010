// check_order.c 
// Repeatedly reads positive integer, until the input value 
// is zero, or the data are not in increasing order.

#include <stdio.h>

int main(void) {
	int des_count,num,prev_num;
	des_count=0; //default 0 = is increasing,if in_increasing >0, 
	prev_num=0;
	num=9999; //dummy value !=0
	while(num!=0&&des_count<1){
		printf("Enter positive integer: ");
		scanf("%d",&num);
		if (num>0){
			if (prev_num>=num){
				//printf("Previous num: %d ; current num: %d\n",prev_num,num);
				des_count++;
			}
			prev_num=num;
		}

	}

	if (des_count>=1){
		printf("Data are not in increasing order.\n");
	}else{
		printf("Data are in increasing order.\n");
	}
	return 0;
}

