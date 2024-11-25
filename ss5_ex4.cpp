#include<stdio.h>

int main(){
	int n,tich; 
	printf("nhap mot so tu 1 den 10 vao n ");
	scanf("%d",&n);
	for( int i = 1; i <= 10; i++){
		tich = n * i; 
		 printf("%d x %d = %d\n" , n ,i , tich); 
	} 
	
} 
