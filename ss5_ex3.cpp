#include<stdio.h>

int main(){
	int n;
	int tong = 0;
	printf("nhap vao so n = ");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		tong += i;  
	}
	
	printf("tong can tim la %d",tong); 
} 
