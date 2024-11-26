#include<stdio.h>
#include<math.h> 
int main(){
	//khai bao
	float  a,b,c,delta,x1,x2;	 
	//nhap so
	printf("so thu nhat : ");
	scanf("%f",&a);
	printf("so thu hai : ");
	scanf("%f",&b);
	printf("so thu ba : "); 
	scanf("%f",&c); 
	printf("\nphuong trinh co dang: %0.0fx^2 +%0.0fx +%0.0f = 0",a,b,c);
    if(a == 0) {
        // a== 0 phuong trinh tro thanh phuong trinh bac mot bx + c = 0
        if(b == 0) {
            if (c == 0) {
                printf("\nphuong trinh vo so nghiem.\n");
            } else {
                printf("\nPhuong trinh vo nghiem.\n");
            }
        } else {
            printf("\nphuong trinh co nghiem  x = %0.2f\n",-c/b);
        }
    }else{
        delta = b*b - 4*a*c;
        if(delta > 0){
		            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("\nNghiem thu nhat x1 = %0.2f\n",x1);
            printf("\nNghiem thu nhat  x2 = %0.2f\n",x2);
        } else if ( delta == 0) {
            printf("\nphuong trinh có nghiem kep: x1 = x2 = %0.2f\n",-b/2*a);
        } else {
            printf("\nphuong trinh vo nghiem\n");
        }
    }
 
    printf("\n-------------------------------\n");
	
	//ket thuc 
} 
