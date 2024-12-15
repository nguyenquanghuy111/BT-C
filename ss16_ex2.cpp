#include<stdio.h>
void swap(int *num1,int *num2){
int temp=*num1;
*num1=*num2;
*num2=temp;
printf("num1: %d\n",*num1);
printf("num2: %d\n",*num2);
}
int main(){
    int a=1;
	int b=2; 
	printf("gia tri truoc khi hoan doi: %d %d\n",a,b);
	swap(&a,&b);
	printf("gia tri sau khi hoan doi: %d %d",a,b); 
} 
