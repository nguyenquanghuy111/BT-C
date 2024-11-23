#include<stdio.h>

int main(){
	int a,b,c; 
	printf("so dien dau thang");
	scanf("%d",&a);
	printf("so dien cuoi thang");
	scanf("%d",&b);
    //tinh dien da su dung
	c = b - a;
	//0<=so dien(c)<50 voi gia dien la 10000
	if(0<=c&&c<50){
	int tiendien= c * 10000;
		printf("tien dien cua ban la %d\n",tiendien); 
	} 
    //50<=sodien(c)<100 voi gia dien la 15000
	if(50<=c&&c<100){
		int tiendien= c *15000;
		printf(" tien dien cua ban la %d\n",tiendien); 
	} 
	//100<=sodien(c)<150 voi gia dien la 20000
	if(100<=c&&c<150){
		int tiendien= c * 20000;
		printf("tien dien cua ban la %d\n",tiendien); 
	} 
	//150<=sodien(c)<200 v?i gia dien la 25000
	if(150<=c&&c<200){
		int tiendien=c * 25000;
		printf("tien dien cua ban la %d\n",tiendien); 
	} 
	//200<=sodien(c) voi tien dien la 30000
	if(200<=c){
		int tiendien=c * 30000;
		printf(" tien dien cua ban la %d\n",tiendien); 
	} 
	 return 0; 
	}   
