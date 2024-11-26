#include<stdio.h>

int main(){
	int a,b,c,d,e,sum;
	printf("nhap a= ");
	scanf("%d",&a);
	printf("nhap b= ");
	scanf("%d",&b);
	printf("nhap c= ");
	scanf("%d",&c);
	printf("nhap d= ");
	scanf("%d",&d);
	printf("nhap e= ");
	scanf("%d",&e);
	if( a % 2 != 0){
		sum += a; 
	}
	if( b % 2 != 0){
		sum += b; 
	}
	 if( c % 2 != 0){
		sum += c; 
	}
	if( d % 2 != 0){
		sum += d; 
	}
	if( e % 2 != 0){
		sum += e; 
	}
	printf("sum = %d\n",sum);
	return 0; 
} 
