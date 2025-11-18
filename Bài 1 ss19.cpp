#include <stdio.h>
#define MAX_SIZE 100
int main() {
    int n, i;
    int arr[MAX_SIZE];
    int max_value;
    int *ptr;
    printf("Nhap so luong phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    ptr = arr; 
    for (i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", (ptr + i));
    }
    max_value = *ptr;
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max_value) {
            max_value = *(ptr + i);
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max_value);
    return 0;
}

