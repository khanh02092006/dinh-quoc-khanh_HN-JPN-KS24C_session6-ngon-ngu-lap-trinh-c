#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    if (a == 0 && b == 0 && c == 0) {
        printf("Phuong trinh co vo so nghiem.\n");
    } else if (a == 0 && b == 0) {
        printf("Phuong trinh vo nghiem.\n");
    } else if (a == 0) {
        printf("Phuong trinh co mot nghiem: x = %.2f\n", -(float)c / b);
    } else {

        float denta = (b * b) - 4 * a * c;
        float x1, x2;

        if (denta > 0) {
            x1 = (-b + sqrt(denta)) / (2 * a);
            x2 = (-b - sqrt(denta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        } else if (denta == 0) {
            x1 = -b / (2.0 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x1);
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}
