#include<stdio.h>

int main(){
	int a, b, menu, kq1;
	
	float kq = 0; 
	printf("nhap so thu nhat: ");
	scanf("%d", &a); 
	printf("nhap so thu hai: ");
	scanf("%d", &b); 
	while(1){
		printf("\n1. tong 2 so\n2. hieu 2 so\n3.tich 2 so\n4.thuong 2 so\n5. thoat\n"); 
		printf("\nlua chon cua ban: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				kq1 = a + b; 
				printf("%d + %d = %d\n", a, b, kq1); 
				break; 
			case 2:
				kq1 = a - b; 
				printf("%d - %d = %d\n", a, b, kq1); 
				break; 
			case 3:
				kq1 =  a * b; 
				printf("%d * %d = %d\n", a, b, kq1); 
				break; 
			case 4:
				kq = (float) a / b; 
				printf("%d / %d = %.2f\n", a, b, kq); 
				break; 
			case 5:
				goto end; 
			default:
				printf("loi cu phap! ");
				break; 
		} 
	}
	end: 
	printf("thoat trang tinh!"); 
	return 0; 
}
