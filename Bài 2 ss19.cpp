#include <stdio.h>
void countEvenOdd(int *arr, int n, int *even, int *odd) {
    *even = 0;
    *odd = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) % 2 == 0) {
            (*even)++;
        } else {
            (*odd)++;
        }
    }
}
int main() {
    int n;
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int even_count, odd_count;
    countEvenOdd(arr, n, &even_count, &odd_count);
    printf("\nKet qua:\n");
    printf("So phan tu chan: %d\n", even_count);
    printf("So phan tu le: %d\n", odd_count);
    return 0;
}

