#include <stdio.h>

int main (void){
	int n;
	int count=1,ans=0;
	printf("Enter n: ");
	scanf("%d", &n);
	
	while(count<=n){
		ans+=count;
		count++;
	}
	
	printf("Sum = %d\n",ans);

	return 0;

}
