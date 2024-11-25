#include<stdio.h>

int main(){
	int n;
	for(int i = 1; i <= 10; i++){
		for(int p = 1; p <=10; p++){
			n = i * p; 
			printf("%d x %d = %d\n",i,p,n); 
		} 
		printf(" \n"); 
	} 
	return 0; 
} 
