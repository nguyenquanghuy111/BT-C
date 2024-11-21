#include<stdio.h>

int main(){
	float diemtoan , diemvan , diemanh, tongdiem, diemtrungbinh;
	printf("nhap diemtoan");
	scanf("%f",&diemtoan);
	printf("nhap diemvan");
	scanf("%f",&diemvan);
	printf("nhap diemanh");
	scanf("%f",&diemanh);
	tongdiem = diemtoan + diemvan + diemvan;
	diemtrungbinh = tongdiem / 3;
	printf("tong diem = %.2f\n",tongdiem);
	printf("diem trung binh = %.2f\n",diemtrungbinh);
	return 0; 
	 
} 
