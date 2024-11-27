#include<stdio.h>
int main(){
	int a[5];
	for(int i = 0; i < 5; i++){
		printf("nhap lan luot phan tu %d : ",i + 1);
		scanf("%d",&a[i]); 
	}
	for(int i = 0; i < 5; i++){
		printf("%d",a[i]); 
	} 
	return 0; 
} 
