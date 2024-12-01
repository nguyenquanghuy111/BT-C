#include<stdio.h>
int main(){
	//khai bao
	int n;
	int sum=0; 
	//nhâp mang
	//b1 :nguoi dung nhap vao so phan tu va gia tri tung phan tu
	int arr[n];
	printf("nhap so phan tu : ");
	scanf("%d",&n);
	printf("nhap cac phan tu:\n");
	for(int i=0; i<n; i++){
		printf("phan tu %d: ",i+1);
		scanf("%d",&arr[i]); 
	} 
	//hien thi
	printf("mang: ");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]); 
	} 
	//b1:in toan bo gia tri trong mang
	 printf("\nso chan: ");
	 for(int i=0; i<n; i++){
	 	if(arr[i] % 2 ==0){
	 		printf("%d ",arr[i]);
			 sum += arr[i]; 
		 }  
	 }
	 printf("\ntong so chan la: %d\n",sum); 
	//in các so chan va tinh tong
	
	//b1:dung if neu la so le thi bo qua
	//b2:dung if neu la so chan thi tinh tong 
	//tim gia tri lon nhat va nho nhat
	//b1:xac dinh gia tri lon nhat 
	//b2:xac dinh gia tri nho nhat
	//b3:in cac gia tri 
	//in so nguyen to  trong mang va tinh tong
	//b1:loc cac so nguyen to
	//b2:tinh tong cac so nguyen to nay 
	//dem so lan xuat hien cua 1 so 
	//b1:nhap vao 1 so bat ki
	//b2:dem xem xuat hien bao nhieu lan trong mang
	//b3:in ra man hinh 
	// them phan tu vao mang
	//b1:them 1 phan tu bat ki
	//b2:them phan tu dó vao 1 vi tri do nguoi dung chi dinh 
	//thoat chuong trinh
	//b1:dung chuong trinh 
	//ket thuc 
} 
