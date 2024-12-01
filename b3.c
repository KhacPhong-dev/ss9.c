#include <stdio.h>
int main() {
    int mang[100];
    int n, a;
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
    printf("Mang hien tai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("Nhap vi tri can xoa (tu 0 den %d): ", n - 1);
    scanf("%d", &a);
    while (a < 0 || a >= n) {
        printf("Vi tri khong hop le. Nhap lai (tu 0 den %d): ", n - 1);
        scanf("%d", &a);
    }
    for (int i = a; i < n - 1; i++) {
        mang[i] = mang[i + 1];
    }
    n--;
    printf("Mang sau khi xoa phan tu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
}