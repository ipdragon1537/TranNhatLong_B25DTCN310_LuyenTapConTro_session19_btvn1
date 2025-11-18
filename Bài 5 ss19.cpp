#include <stdio.h>
#define MAX_SIZE 100
int compareArrays(int *a, int *b, int n) {
    for (int i = 0; i < n; i++) {
        if (*(a + i) != *(b + i)) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    int arr1[MAX_SIZE];
    int arr2[MAX_SIZE];
    printf("Nhap so luong phan tu cua mang (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);
    if (n <= 0 || n > MAX_SIZE) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang thu nhat:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", (arr1 + i));
    }
    printf("Nhap cac phan tu cua mang thu hai:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", (arr2 + i));
    }
    if (compareArrays(arr1, arr2, n) == 1) {
        printf("\nHai mang giong nhau.\n");
    } else {
        printf("\nHai mang khac nhau.\n");
    }
    
    return 0;
}

