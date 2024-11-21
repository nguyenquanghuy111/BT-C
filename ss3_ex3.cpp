#include<stdio.h>

int main(){
	//b1 bankinh , chuvi , dientich;
	float r,cv,dt;
	const float pi = 3.14; 
	//b2 nhap du lieu
    printf("nhap bankinh");
	scanf("%f",&r);
	//b3 tinh chuvi dientich
	cv = pi*r*2;
	dt = pi*r*r;
	//b4 hien thi
	printf("chuvi hinh tron la %.2f\n",cv);
	printf("dientich hinh tron la %.2f\n",dt);    
	return 0; 
} 
