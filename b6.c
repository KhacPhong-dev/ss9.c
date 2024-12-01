#include <stdio.h>

int main() {
    int m, n, luachon;
    int mang[100][100];
    int tonglle, tichbien, tongmaxdong;
    
    do {
        printf("\nMENU\n");
        printf("1. Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In gia tri cac phan tu la le va tinh tong\n");
        printf("4. In ra cac phan tu nam tren duong bien va tinh tich\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh\n");
        printf("6. In ra cac phan tu nam tren duong cheo phu\n");
        printf("7. In ra dong co tong gia tri cac phan tu la lon nhat\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &luachon);

        switch (luachon) {
            case 1:
                printf("Nhap so dong m: ");
                scanf("%d", &m);
                printf("Nhap so cot n: ");
                scanf("%d", &n);
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("Nhap gia tri cho phan tu mang[%d][%d]: ", i, j);
                        scanf("%d", &mang[i][j]);
                    }
                }
                break;

            case 2:
                printf("Gia tri cac phan tu cua mang:\n");
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("%d ", mang[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                tonglle = 0;
                printf("Gia tri cac phan tu le trong mang:\n");
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        if (mang[i][j] % 2 != 0) {
                            printf("%d ", mang[i][j]);
                            tonglle += mang[i][j];
                        }
                    }
                }
                printf("\nTong cac phan tu le: %d\n", tonglle);
                break;

            case 4:
                tichbien = 1;
                printf("Gia tri cac phan tu nam tren duong bien va tinh tich:\n");
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                            printf("%d ", mang[i][j]);
                            tichbien *= mang[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu duong bien: %d\n", tichbien);
                break;

            case 5:
                printf("Gia tri cac phan tu nam tren duong cheo chinh:\n");
                for (int i = 0; i < m && i < n; i++) {
                    printf("%d ", mang[i][i]);
                }
                printf("\n");
                break;

            case 6:
                printf("Gia tri cac phan tu nam tren duong cheo phu:\n");
                for (int i = 0; i < m && i < n; i++) {
                    printf("%d ", mang[i][n - i - 1]);
                }
                printf("\n");
                break;

            case 7:
                tongmaxdong = 0;
                int dongmax = 0;
                for (int i = 0; i < m; i++) {
                    int tongdong = 0;
                    for (int j = 0; j < n; j++) {
                        tongdong += mang[i][j];
                    }
                    if (tongdong > tongmaxdong) {
                        tongmaxdong = tongdong;
                        dongmax = i;
                    }
                }
                printf("Dong co tong cac phan tu lon nhat la: %d\n", dongmax + 1);
                break;

            case 8:
                printf("Thoat chuong trinh.\n");
                break;

            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
        }
    } while (luachon != 8);
}