#include<stdio.h>

int main(){
	float c,f;
	printf("nhap nhiet do theo c : ");
	scanf("%f",&c);
	//doi do tu c sang f
	f = (9/5) * c + 32;
	printf("%.2f c nhiet do cua f la %.2f f \n",c , f); 
	return 0; 
} 
