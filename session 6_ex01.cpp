#include<stdio.h>
int main (){
	int a,b,c,d,e,tong; 
	printf (" nguoi dung nhap vao so nguyen a");
	scanf("%d",&a);
	printf (" nguoi dung nhap vao  so nguyen b");
	scanf ("%d",&b);
	printf (" nguoi dung nhap vao so nguyen c ");
	scanf("%d",&c);
	printf(" nguoi dung nhap vao so nguen d");
	scanf("%d",&d);
	printf(" nguoi dung nhap vao so nguyen e");
	scanf(" %d",&e);
	if (a%2!=0 ){
	tong = tong + a;
	}
	if (b%2!=0){
		tong = tong + b;
		}
		if (c%2!=0){
		tong = tong + c;
		}
		if (d%2!=0){
			tong = tong +d;
			if (e%2!=0){
				tong = tong +e;
				}
			printf (" tong cac so le là %d",tong );
	

	}
	 return 0;
		}
		
	
