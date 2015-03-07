int i , k ,temp;

for (i = 0; i < n/2; i++){
	for (k = 0;  < (n+1)/2; k++){
		temp = arr[i][k];
		arr[i][k] = arr[n-1-k][i];
		arr[n-1-k][i] = arr[n-1-i][n-1-k];
		arr[n-1-i][n-1-k] = arr[k][n-1-i];
		arr[k][n-1-i] = temp;
	}
}