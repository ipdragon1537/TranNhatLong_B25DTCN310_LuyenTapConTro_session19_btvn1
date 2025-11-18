#include <stdio.h>

#define MAX_SIZE 100 
int countValue(int *arr, int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == x) {
            count++;
        }
    }
    return count;
}
int main() {
    int n, x;
    int arr[MAX_SIZE];
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
    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);
    int occurrences = countValue(arr, n, x);
    printf("Gia tri %d xuat hien %d lan trong mang.\n", x, occurrences);
    
    return 0;
}

