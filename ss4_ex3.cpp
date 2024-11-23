#include<stdio.h>

int main(){
	//khao bao
	int a; 
    //nhap tu ban phim
    printf("so can nhap");
	scanf("%d",&a);
	if(a % 3 == 0 || a % 5 == 0 || a % 3 && 5 ==0){
		printf("co chia het cho 3 , 5"); 
	}  
	else{
		printf("so nay khong chia het"); 
	} 
	return 0; 
	}    
