#include<stdio.h>
int main(){
	int a; 
	int matran[a][a]; 
	printf("nhap vao mot so nguyen ");
	scanf("%d", &a);
	for(int i=0; i < a; i++){
		for(int j=0; j < a; j++){
			printf("phan tu [%d][%d]: ",i,j);
			scanf("%d",&matran[i][j]); 
		} 
	} 
	printf("\nma tran vua nhap:\n");
	for(int i=0; i < a; i++){
		for(int j=0;j < a ; j++){
			printf("%4d", matran[i][j]); 
 
		}
		printf("\n"); 
	} 
	return 0; 
} 

