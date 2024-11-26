#include<stdio.h>
int main(){
	int thang,nam;
	printf (" nhap thang ");
	scanf (" %d",&thang);
	printf(" nhap nam ");
	scanf("%d",&nam);
	if (thang <1 || thang>12){
		printf (" loi ");
		}
		switch (thang){
			case 1: case 3:case 5: case 7:case 8: case 10:case 12:
				printf (" co 31 ngày ");
				
				break;
				case 4:case 6:case 9:case 11:
					printf (" có 30 ngay");
					break;
					case 2:
						printf(" có 28 hoac 29 ngay");
						}
						return 0;
						}
						

