#include <stdio.h>

int main() {
    int so1, so2, so3, so4, so5, chan = 0, le = 0;

    printf("Nhap so thu 1: ");
    scanf("%d", &so1);
    printf("Nhap so thu 2: ");
    scanf("%d", &so2);
    printf("Nhap so thu 3: ");
    scanf("%d", &so3);
    printf("Nhap so thu 4: ");
    scanf("%d", &so4);
    printf("Nhap so thu 5: ");
    scanf("%d", &so5);

    if (so1 % 2 != 0) {
        le += 1;
    } else {
        chan += 1;
    }
    if (so2 % 2 != 0) {
        le += 1;
    } else {
        chan += 1;
    }
    if (so3 % 2 != 0) {
        le += 1;
    } else {
        chan += 1;
    }
    if (so4 % 2 != 0) {
        le += 1;
    } else {
        chan += 1;
    }
    if (so5 % 2 != 0) {
        le += 1;
    } else {
        chan += 1;
    }

    printf("Co %d so chan.\n", chan);
    printf("Co %d so le.\n", le);

    return 0;
}

