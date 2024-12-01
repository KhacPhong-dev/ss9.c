#include <stdio.h>
int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int a, b;
    int n = sizeof(mang) / sizeof(mang[0]);
    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++){
        printf("%d ", mang[i]);
    }
    printf("Nhap vi tri can sua %d: ", n - 1);
    scanf("%d", &a);
    while (a < 0 || a >= n){
        printf("Vi tri khong hop le. Nhap lai %d: ", n - 1);
        scanf("%d", &a);
    }
    printf("Nhap gia tri moi: ");
    scanf("%d", &b);
    mang[a] = b;
    printf("Mang sau khi sua: ");
    for (int i = 0; i < n; i++){
        printf("%d ", mang[i]);
    }
}