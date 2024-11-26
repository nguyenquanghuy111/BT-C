#include<stdio.h>
int main(){
	int a,b,c,d,e,chan,le;
	printf("so thu nhat = ");
	scanf("%d",&a);
	printf("so thu hai = ");
	scanf("%d",&b);
	printf("so thu ba = ");
	scanf("%d",&c);
	printf("so thu tu = ");
	scanf("%d",&d);
	printf("so thu nam = ");
	scanf("%d",&e);
	if( a % 2 == 0){
		 chan ++; 
	}
	if( b % 2 == 0){
		chan ++ ; 
	}
	 if( c % 2 == 0){
		chan ++ ; 
	}
	if( d % 2 == 0){
		chan ++ ; 
	}
	if( e % 2 == 0){
		chan ++ ; 
	}
	le = 5-chan ; 
	printf("so chan la %d\n so le  la %d",chan,le); 
}
