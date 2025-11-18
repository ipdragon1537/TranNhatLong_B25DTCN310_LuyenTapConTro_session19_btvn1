#include <stdio.h>
#define MAX_SIZE 100
void average(int *arr, int n, float *result) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    *result =sum / n;
}

int main() {
    int n;
    int arr[MAX_SIZE];
    float avg;
    printf("Nhap so luong phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", (arr + i));
    }
    average(arr, n, &avg);
    printf("Gia tri trung binh cua mang la: %.2f\n", avg);
    
    return 0;
}

