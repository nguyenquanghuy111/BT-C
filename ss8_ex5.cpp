#include<stdio.h> 
int main(){
	//khai bao va gan gia tri cho ma tran
	int arr[4][4] ={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int sum =0; 	 
	//tinh tong cac phan tu tren duong bien
	//ktra cac phan thuoc duong bien 
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			if(i ==0 || i == 4-1 || j == 0 || j == 4-1){
                  sum += arr[i][j]; 
 			} 
		} 
	} 
	//in ket qua
	printf("tong cac phan tu tren  duong bien cua ma tran là %d",sum); 
	return 0; 
} 
