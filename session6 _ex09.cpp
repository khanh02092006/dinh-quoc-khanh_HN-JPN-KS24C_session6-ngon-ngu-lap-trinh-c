#include<stdio.h>
int main(){
	int tram,chuc,donvi,tong;
	printf (" cac so  Armstrong co 3 chu so:\n");
	for (int i= 100;i<=900;i++){
	tram = i/100;
	chuc = (i/10) %10;
	donvi = i %10;
	
	tong = ( tram * tram * tram)+(chuc * chuc * chuc)+(donvi *donvi *donvi);
	if (tong == i){
		printf ("%d\n",i);
		}
		}
	return 0;
}
