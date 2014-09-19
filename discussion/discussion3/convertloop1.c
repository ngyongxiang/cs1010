
sum = 0;
i = -5;
do {
    sum += i;
    i += 5;
} while (i < 100);

printf("sum = %d\n", sum);

i=-5;
while (i<100){
	sum +=i;
	i+=5;

}
printf("sum = %d\n", sum);

for (o=-5; i<100;i+5){
	sum+=1;
}
//		 				How to use scanner
// ========================================================= // 

printf("Enter n: ");
for (scanf("%d", &n); n < 0; scanf("%d", &n))
    printf("Enter n: ");

printf("n = %d\n", n);


// 					Change to While loop	
//=========================================================//

while (n<0){
	scanf("%d",&n);
}

