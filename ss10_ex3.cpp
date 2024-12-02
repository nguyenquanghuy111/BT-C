#include<stdio.h>
int main(){
	int arr[]={22,11,33,21,53,22};
	int size=6;
	 for (int i = 1; i < size; i++) {
        int key = arr[i]; 
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    // In m?ng sau khi s?p x?p
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0; 
} 
