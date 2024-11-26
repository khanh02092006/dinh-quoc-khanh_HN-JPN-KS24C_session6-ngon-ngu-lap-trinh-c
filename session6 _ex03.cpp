#include <stdio.h>
int main() {
    int matkhau = 8386;
    int nhap;            

    do {
        printf("Dien mat khau de dang nhap: ");
        scanf("%d", &nhap);

        if (nhap != matkhau) {
            printf("Mat khau sai. Vui long thu lai!\n");
        }
    } while (nhap != matkhau);

    printf("Mat khau chinh xac. Dang nhap thanh cong!\n");

    return 0;
}




