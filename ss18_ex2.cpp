#include <stdio.h>
struct student {
    char fullName[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct student x; 
    printf("Nhap ten sinh vien: ");
    fgets(x.fullName, sizeof(x.fullName), stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &x.age);
    getchar(); 
    printf("Nhap so dien thoai sinh vien: ");
    fgets(x.phoneNumber, sizeof(x.phoneNumber), stdin);
    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ten: %s", x.fullName);
    printf("Tuoi: %d\n", x.age);
    printf("So dien thoai: %s", x.phoneNumber);

    return 0;
}

