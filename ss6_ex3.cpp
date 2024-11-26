#include<stdio.h>
int main(){
	int n ;
	while(1){
		printf("nhap n : ");
		scanf("%d",&n);
		if(n == 12){
			goto end; 
		}
		else{
			printf("ban hay nhap lai n\n : "); 
		} 
	}
	end:
	return 0; 
	}  
