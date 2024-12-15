#include<stdio.h>
int main(){
	int n =30;
	printf("dia chi cua n la: %d\n",&n);
	int *ptr;
	ptr = &n;
	printf("\ngia tri cua prt : %d",ptr); 
	return 0; 
} 
