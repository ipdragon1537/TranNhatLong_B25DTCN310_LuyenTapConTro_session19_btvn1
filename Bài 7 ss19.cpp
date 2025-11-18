#include <stdio.h>
#define MAX_SIZE 100

void nhapMang(int *ptr, int *n) {
    printf("Nhap so phan tu (toi da %d): ", MAX_SIZE);
    scanf("%d", n);

    if (*n <= 0 || *n > MAX_SIZE) {
        printf("So phan tu khong hop le. Khong the nhap.\n");
        *n = 0;
        return;
    }

    printf("Nhap %d phan tu:\n", *n);
    for (int i = 0; i < *n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", ptr + i); 
    }
}

void hienThiMang(int *ptr, int n) {
    if (n <= 0) {
        printf("Mang rong.\n");
        return;
    }
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
}

void tinhTong(int *ptr, int n) {
    if (n <= 0) {
        printf("Mang rong, khong the tinh tong.\n");
        return;
    }
    long long tong = 0;
    for (int i = 0; i < n; i++) {
        tong += *(ptr + i);
    }
    printf("Tong cac phan tu trong mang la: %lld\n", tong);
}

void timMax(int *ptr, int n) {
    if (n <= 0) {
        printf("Mang rong, khong the tim phan tu lon nhat.\n");
        return;
    }
    int max = *ptr;
    for (int i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
}

int main() {
    int mang[MAX_SIZE];
    int *ptr = mang;
    int n = 0;
    int luaChon;

    do {
        printf("\n------------- MENU -------------\n");
        printf("1. Nhap so phan tu va cac phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("0. Thoat\n");
        printf("--------------------------------\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                nhapMang(ptr, &n);
                break;
            case 2:
                hienThiMang(ptr, n);
                break;
            case 3:
                printf("Do dai cua mang la: %d\n", n);
                break;
            case 4:
                tinhTong(ptr, n);
                break;
            case 5:
                timMax(ptr, n);
                break;
            case 0:
                printf("Da thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
    } while (luaChon != 0);

    return 0;
}

