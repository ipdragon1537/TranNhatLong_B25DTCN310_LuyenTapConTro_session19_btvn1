#include <stdio.h>

#define MAX_SIZE 100 
void copyArray(int *src, int *dest, int n) {
    for (int i = 0; i < n; i++) {
        *(dest + i) = *(src + i);
    }
}
void printArray(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int n;
    int arrayA[MAX_SIZE];
    int arrayB[MAX_SIZE];
    printf("Nhap so luong phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang A:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", (arrayA + i));
    }
    copyArray(arrayA, arrayB, n);
    printf("\nMang B sau khi sao chep tu mang A la:\n");
    printArray(arrayB, n);
    return 0;
}

