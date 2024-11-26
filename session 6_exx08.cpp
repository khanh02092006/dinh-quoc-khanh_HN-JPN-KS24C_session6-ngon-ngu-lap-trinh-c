#include<stdio.h>

int main() {
    double tienbandau, laisuat, sothanggui;

    printf("Nhap so tien ban dau: ");
    scanf("%lf", &tienbandau);
    printf("Nhap lai suat: ");
    scanf("%lf", &laisuat);
    printf("Nhap so thang gui: ");
    scanf("%lf", &sothanggui);

  
    double tienlai = tienbandau * (laisuat / 100) * sothanggui;
    double tongtiennhan = tienbandau + tienlai;

    printf("Tien lai la: %.2lf\n", tienlai);
    printf("So tien nhan duoc la: %.2lf\n", tongtiennhan);

    return 0;
}

