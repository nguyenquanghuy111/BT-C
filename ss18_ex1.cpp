#include<stdio.h>
int main(){
	struct student{
		char fullName[100];
		int age;
		char phoneNumber[20]; 
	};
	struct student user={"nguyen quang huy",18,"0123456789", 
	}; 
	printf("in thong tin sinh vien:\n"); 
    printf("ho va ten :%s\n", user.fullName);
	printf("tuoi: %d\n", user.age); 
	printf("so dien thoai: %s\n", user.phoneNumber); 
	return 0; 
} 
