
#include<stdio.h>

int main(){
	int arr[]={1,2,3,4,5,6};
	int number, test;
	printf("nhap so: "); 
	scanf("%d", &number); 
	for(int i =0;i <  sizeof arr/sizeof(int); i++){
		if(number == arr[i]){
			printf("Vi tri phan tu trong mang la: %d", i + 1); 
		}else{
			test++;
		} 
	} 
	if(test == sizeof arr/ sizeof(int)){
		printf("phan tu khong ton tai trong mang"); 
	} 
	return 0; 
} 

