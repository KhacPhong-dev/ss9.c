#include <stdio.h>
int main() {
    int mang[100], n = 0, luachon, vitri, giatri;
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luachon);

        switch (luachon) {
            case 1:
                printf("Nhap so phan tu muon nhap (toi da 100): ");
                scanf("%d", &n);
                while (n < 1 || n > 100) {
                    printf("So phan tu phai nam trong khoang tu 1 den 100.\n");
                    printf("Nhap lai so phan tu: ");
                    scanf("%d", &n);
                }
                printf("Nhap %d phan tu:\n", n);
                for (int i = 0; i < n; i++) {
                    printf("Phan tu thu %d: ", i + 1);
                    scanf("%d", &mang[i]);
                }
                break;
            
            case 2:
                if (n == 0) {
                    printf("Mang chua co phan tu nao.\n");
                } else {
                    printf("Mang hien tai: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", mang[i]);
                    }
                    printf("\n");
                }
                break;
            
            case 3:
                if (n >= 100) {
                    printf("Mang da day, khong the them phan tu.\n");
                } else {
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &giatri);
                    printf("Nhap vi tri muon them (tu 0 den %d): ", n);
                    scanf("%d", &vitri);
                    while (vitri < 0 || vitri > n) {
                        printf("Vi tri khong hop le. Nhap lai (tu 0 den %d): ", n);
                        scanf("%d", &vitri);
                    }
                    for (int i = n; i > vitri; i--) {
                        mang[i] = mang[i - 1];
                    }
                    mang[vitri] = giatri;
                    n++;
                }
                break;
            
            case 4:
                if (n == 0) {
                    printf("Mang chua co phan tu nao.\n");
                } else {
                    printf("Nhap vi tri can sua (tu 0 den %d): ", n - 1);
                    scanf("%d", &vitri);
                    while (vitri < 0 || vitri >= n) {
                        printf("Vi tri khong hop le. Nhap lai (tu 0 den %d): ", n - 1);
                        scanf("%d", &vitri);
                    }
                    printf("Nhap gia tri moi: ");
                    scanf("%d", &giatri);
                    mang[vitri] = giatri;
                }
                break;
            
            case 5:
                if (n == 0) {
                    printf("Mang chua co phan tu nao.\n");
                } else {
                    printf("Nhap vi tri can xoa (tu 0 den %d): ", n - 1);
                    scanf("%d", &vitri);
                    while (vitri < 0 || vitri >= n) {
                        printf("Vi tri khong hop le. Nhap lai (tu 0 den %d): ", n - 1);
                        scanf("%d", &vitri);
                    }
                    for (int i = vitri; i < n - 1; i++) {
                        mang[i] = mang[i + 1];
                    }
                    n--;
                }
                break;
            
            case 6:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (luachon != 6);
}