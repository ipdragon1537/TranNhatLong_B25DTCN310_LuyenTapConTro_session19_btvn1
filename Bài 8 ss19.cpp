#include <stdio.h>

#define MAX 1005

int laSoNguyenTo(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int mang[MAX];
    int* a = mang;
    int n = 0;
    int chon;
    int co;
    do {
        printf("\n");
        printf("==============================\n");
        printf("            MENU\n");
        printf("==============================\n");
        printf("1. Nhap mang\n");
        printf("2. In cac phan tu chan\n");
        printf("3. In cac phan tu nguyen to\n");
        printf("4. Dao nguoc mang\n");
        printf("5. Sap xep mang\n");
        printf("6. Tim kiem phan tu\n");
        printf("7. Thoat\n");
        printf("==============================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch (chon) {
            case 1:
                printf("Nhap so phan tu (1-%d): ", MAX);
                scanf("%d", &n);
                if (n < 1 || n > MAX) {
                    printf("So phan tu khong hop le!\n");
                    n = 0;
                } else {
                    for (int i = 0; i < n; i++) {
                        printf("a[%d] = ", i);
                        scanf("%d", a + i);
                    }
                    printf("=> Nhap mang thanh cong!\n");
                }
                break;
            case 2:
                if (n == 0) {
                    printf("Ban chua nhap mang!\n");
                    break;
                }
                printf("Cac so chan: ");
                co = 0;
                for (int i = 0; i < n; i++) {
                    if (*(a + i) % 2 == 0) {
                        printf("%d ", *(a + i));
                        co = 1;
                    }
                }
                if (!co) printf("Khong co");
                printf("\n");
                break;
            case 3:
                if (n == 0) {
                    printf("Ban chua nhap mang!\n");
                    break;
                }
                printf("Cac so nguyen to: ");
                co = 0;
                for (int i = 0; i < n; i++) {
                    if (laSoNguyenTo(*(a + i))) {
                        printf("%d ", *(a + i));
                        co = 1;
                    }
                }
                if (!co) printf("Khong co");
                printf("\n");
                break;
            case 4:
                if (n == 0) {
                    printf("Ban chua nhap mang!\n");
                    break;
                }
                for (int i = 0; i < n/2; i++) {
                    swap(a + i, a + n - 1 - i);
                }
                printf("=> Da dao nguoc mang thanh cong!\n");
                break;
            case 5: {
                if (n == 0) {
                    printf("Ban chua nhap mang!\n");
                    break;
                }
                int chonSX;
                do {
                    printf("\n--- SAP XEP MANG ---\n");
                    printf("6. Tang dan\n");
                    printf("7. Giam dan\n");
                    printf("8. Quay lai menu chinh\n");
                    printf("Chon: ");
                    scanf("%d", &chonSX);

                    if (chonSX == 6) {
                        for (int i = 0; i < n-1; i++)
                            for (int j = 0; j < n-1-i; j++)
                                if (*(a + j) > *(a + j + 1))
                                    swap(a + j, a + j + 1);
                        printf("=> Da sap xep tang dan!\n");
                    }
                    else if (chonSX == 7) {
                        for (int i = 0; i < n-1; i++)
                            for (int j = 0; j < n-1-i; j++)
                                if (*(a + j) < *(a + j + 1))
                                    swap(a + j, a + j + 1);
                        printf("=> Da sap xep giam dan!\n");
                    }
                    else if (chonSX != 8) {
                        printf("Chi chon 6, 7 hoac 8!\n");
                    }
                } while (chonSX != 8);
                break;
            }
            case 6:
                if (n == 0) {
                    printf("Ban chua nhap mang!\n");
                    break;
                }
                printf("Nhap gia tri can tim: ");
                int x;
                scanf("%d", &x);
                co = 0;
                for (int i = 0; i < n; i++) {
                    if (*(a + i) == x) {
                        printf("Tim thay %d tai vi tri a[%d]\n", x, i);
                        co = 1;
                    }
                }
                if (!co) printf("Khong tim thay %d trong mang\n", x);
                break;
            case 7:
                printf("\nCam on ban da su dung chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le!\n");
        }
        if (chon != 7) {
            printf("\nNhan Enter de tiep tuc...");
            while(getchar() != '\n');
            getchar();
        }
    } while (chon != 7);

    return 0;
}
