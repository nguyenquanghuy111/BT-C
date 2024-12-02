#include<stdio.h>
int main(){
	int arr[]={11,22,14,65,43};
	int size = 5;
	for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	 for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // hoan doi cac phan tu 
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // In m?ng sau khi s?p x?p
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
} 
