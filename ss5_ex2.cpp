#include<stdio.h>

int main(){
   int n;
   while(1){
   	  printf("ban hay nhap mot so bat ki ");
	  scanf("%d",&n); 
    if(n == 50){
		goto end; 
	}  
    else{
		printf("ban hay nhap lai \n"); 
	}  
   } 
	end:
	return 0; 
}
