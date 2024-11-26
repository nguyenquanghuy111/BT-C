#include<stdio.h>
int main(){
	int y,m,d;
	printf("nhap so nam : ");
	scanf("%d",&y);
	printf("nhap so thang : ");
	scanf("%d",&m);
	switch(m){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("31 ngay");
		break;
		case 2:
		printf("29 ngay");
		break;
		case 4: case 6: case 9: case 11:
		printf("30 ngay"); 
		break; 
	 

}
}
