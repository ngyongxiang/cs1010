#include <stdio.h>

int main(void){
	char a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17;
	
	a1=getchar();//&
	a2=getchar();//g
	a3=getchar();//t

	getchar();// handle space

	a4=getchar();//8
	a5=getchar();//9
	a6=getchar();//1
	a7=getchar();//>
	a8=getchar();//<
	
	fflush(stdin);
	// start trying out scanf
	scanf("%c%c%c%c%c%c%c%c%c", &a9,&a10,&a11,&a12,&a13,&a14,&a15,&a16,&a17);//-rew {[]}

	printf("=========================================\n");
	putchar(a14);
	putchar(a5);
	putchar(a4);
	putchar(a12);
	putchar(a11);
	putchar(a15);
	putchar(a9);
	putchar(a2);
	putchar(a3);
	putchar(a16);
	putchar(a13);
    putchar(a9);
	putchar(a1);
	putchar(a10);
	putchar(a6);
	putchar(a8);
	putchar(a7);
	putchar(a17);
	return 0;
}
