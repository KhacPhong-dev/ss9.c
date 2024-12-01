#include <stdio.h>
int main() {
    int mang[100];
    int a, b, c;
    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &a);
    while (a < 1 || a > 100){
        printf("So phan tu phai nam trong khoang tu 1 den 100.\n");
        printf("Nhap lai so phan tu: ");
        scanf("%d", &a);
    }
    printf("Nhap %d phan tu:\n", a);
    for (int i = 0; i < a; i++){
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("Mang hien tai: ");
    for (int i = 0; i < a; i++){
        printf("%d ", mang[i]);
    }
    printf("\n");
    printf("Nhap gia tri can them: ");
    scanf("%d", &b);
    printf("Nhap vi tri muon them (tu 0 den %d): ", a);
    scanf("%d", &c);
    while (c < 0 || c > 100){
        printf("Vi tri phai nam trong khoang tu 0 den %d.\n", a);
        printf("Nhap lai vi tri: ");
        scanf("%d", &c);
    }
    for (int i = a; i > c; i--){
        mang[i] = mang[i - 1];
    }
    mang[c] = b;
    a++;
    printf("Mang sau khi them phan tu: ");
    for (int i = 0; i < a; i++){
        printf("%d ", mang[i]);
    }
    printf("\n");
}