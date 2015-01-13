
int main (void){
int a = 10, b = 200;

while ((a*a) < (a+b)) {
	printf("a = %d, b = %d\n", a, b);
	a++; 
	b+=10;
}
return 0;
}

