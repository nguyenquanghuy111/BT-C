#include<stdio.h>
int main(){
	//khai bao va gan gia tri ma tran vuong
	int arr[4][4] = {{1,2,3,4,},{5,6,7,8},{1,3,5,7},{2,4,6,8}};
	int sum =0;
	//in va tinh tong duong cheo chinh
	for(int i = 0; i < 4; i++){
		printf("phan tu tren duong cheo chinh la %d\n ",arr[i][i]);
		sum += arr[i][i]; 
	} 
	printf("tong cac phan tu tren duong cheo chinh la %d  ", sum);
	return 0; 
} 
