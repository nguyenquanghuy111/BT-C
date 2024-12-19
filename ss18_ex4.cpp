#include <stdio.h>
struct Student {
    int id;            
    char fullName[50];     
    int age;           
    char phoneNumber[20];
};

int main() {
    struct Student x[50]; 
    int numx = 5;         
    for (int i = 0; i < numx; i++) {
        x[i].id = i + 1; 
        printf("Nhap thong tin sinh vien thu %d:\n", x[i].id);
        printf("Nhap ten: ");
        getchar(); 
        fgets(x[i].fullName, sizeof(x[i].fullName), stdin);

        printf("Nhap tuoi: ");
        scanf("%d", &x[i].age);

        getchar(); // Lo?i b? k? t? xu?ng d?ng c?n l?i

        printf("Nhap so dien thoai: ");
        fgets(x[i].phoneNumber, sizeof(x[i].phoneNumber), stdin);

        printf("\n");
    }

    // In thông tin c?a các sinh viên
    printf("Thong tin cac sinh vien da nhap:\n");
    for (int i = 0; i < numx; i++) {
        printf("Sinh vien thu %d:\n", x[i].id);
        printf("ID: %d\n", x[i].id);
        printf("Ten: %s", x[i].fullName);
        printf("Tuoi: %d\n", x[i].age);
        printf("So dien thoai: %s", x[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

