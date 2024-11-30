#include <stdio.h>

int main() {
    int n; 
    int arr[100];
    int num1, num2, num3, num4, num5, num6;
    int array[100];

    while (1) {
        printf("\n         MENU       \n");
        printf("   1. Nhap vao mang\n");
        printf("   2. Hien thi mang\n");
        printf("   3. Them phan tu\n");
        printf("   4. Sua phan tu\n");
        printf("   5. Xoa phan tu\n");
        printf("   6. Thoat\n");
        printf("\n");
        printf("Lua chon cua ban la : ");
        scanf("%d", &n);    
    
        switch (n) {
            case 1: 
                printf("Nhap vao so phan tu muon nhap :");
                scanf("%d", &num1);
                if (num1 <= 0 || num1 > 100) {
                    printf("So phan tu khong hop le.\n");
                    break; 
                }
                printf("Nhap cac phan tu vao mang .\n");
                for (int i = 0; i < num1; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;    
            case 2:
                printf("Mang sau khi tiep nhan phan tu: ");
                for (int i = 0; i < num1; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3: 
                printf("Nhap gia tri muon them : ");
                scanf("%d", &num2);
                printf("Nhap vi tri can them (1-%d): ", num1 + 1);
                scanf("%d", &num3); 
                if (num3 < 1 || num3 > num1 + 1) {
                    printf("Vi tri khong hop le.\n"); 
                    break;
                }
                for (int i = 0; i < num1; i++) {
                    array[i] = arr[i];
                }
                printf("Mang sau khi them phan tu: ");
                for (int i = 0; i < num1; i++) {
                    if (i == num3 - 1) {
                        printf("%d ", num2); 
                    }
                    printf("%d ", array[i]); 
                }
                printf("\n");
                break;    
            case 4: 
                printf("Nhap gia tri muon sua : ");
                scanf("%d", &num4);
                printf("Nhap vi tri can sua (1-%d): ", num1);
                scanf("%d", &num5); 
                if (num5 < 1 || num5 > num1) {
                    printf("Vi tri khong hop le.\n");
                    break;
                }
                for (int i = 0; i < num1; i++) {
                    array[i] = arr[i];
                }
                printf("Mang sau khi sua phan tu: ");
                array[num5-1] = num4;
                for (int i=0;i<num1;i++) {
                printf("%d ", array[i]);
                } 
                printf("\n");
                break; 
            case 5: 
                printf("Nhap vi tri can xoa (1-%d): ", num1);
                scanf("%d", &num6); 
                if (num6 < 1 || num6 > num1) {
                    printf("Vi tri khong hop le.\n"); 
                    break;
                } 
                for (int i = 0; i < num1; i++) {
                    array[i] = arr[i];
                }
                printf("Mang sau khi xoa phan tu: ");
                for (int i = 0; i < num1; i++) {
                    if (i == num6 - 1) {
                        continue;  
                    }
                    printf("%d ", array[i]); 
                }
                printf("\n");
                break;    
            case 6:
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");    
        } 
    }
    return 0;
}


   
        

