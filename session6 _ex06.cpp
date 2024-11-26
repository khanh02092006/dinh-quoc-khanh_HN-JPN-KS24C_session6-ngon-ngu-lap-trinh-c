#include<stdio.h>
int main (){
	int so;
	for(so=100;so>0;so--){
		if (so %3==0){
			printf (" fizz\n");
			
		} else if (so%5==0){
			printf (" buzz\n");
			
		} else if (so%5==0 && so%3==0){
			printf (" fizzbuzz\n");
		} else {
			printf ("%d\n",so);
		}
		
	}
	return 0;
}

