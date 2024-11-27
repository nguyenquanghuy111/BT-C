#include<stdio.h>
int main(){
	int a[5] = {12,13,14,15,16};
	for(int i = 0; i < 1; i++){
		if((a[0] < a[1])&&a[3]<a[4]){
			printf("phan tu nho nhat %d : \nphan tu lon nhat %d : ",a[0],a[4]);
		}	
	}
	return 0; 
} 
