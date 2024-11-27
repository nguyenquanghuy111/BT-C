#include<stdio.h>
int main(){
	int a[5] = {1,2,3,4,5};
	a[0] = 30;
	a[1] = 31;
	a[2] = 32;
	a[3] = 33;
	a[4] = 28;
	for(int i = 0; i < 5; i++){
		if(a[i]  % 2 == 0){
			printf(" phan tu so chan  : \n"); 
		}
		else{
			printf(" %d ", a[i]); 
		} 
	}
	return 0; 
	} 
