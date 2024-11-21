#include<stdio.h>

int main(){
	// khai bao 
	float a, h, S;
	// nhap gia tri , cong thuc 
	printf("nhap do dai canh day cua tam giac: ");
	scanf("%f", &a); 
	printf("nhap do dai chieu cao cua tam giac: ");
	scanf("%f", &h);
	S = 0.5 * a * h; 
	//in ket qua 
	printf("dien tich tam giac la: %.2f", S); 
	return 0; 
} 
