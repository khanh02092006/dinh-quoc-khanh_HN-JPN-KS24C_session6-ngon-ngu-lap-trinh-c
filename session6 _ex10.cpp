#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf(" nhap so n");
	scanf("%d",&n);
	if (n<2){
		printf(" %d khong phai so nguyen to",n);
		} else {
			int math =1;
			for (int i=2;i<=sqrt(n);i++){
				if(n%i==0){
					math =0;
					break;
					}
					}
		if (math==1){
		printf(" %d la so nguyen to \n",n);
		} else {
		printf (" %d khong là so nguyen to\n",n);
		}
		}
		return 0;
		}
					
					
				
