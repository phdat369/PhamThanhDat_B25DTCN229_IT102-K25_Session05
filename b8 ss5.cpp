#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("Nhap vao so met khoi nuoc : ");
	scanf("%d",&n);
	if(n<=10){
		printf("Tong tien : %d VND",n*6000);
	}
	else if(n>10 && n<=20){
		printf("Tong tien : %d VND ",10*6000+(n-10)*7000);
	}
	else if(n>20 && n<=30){
		printf("Tong tien : %d VND",10*6000+10*7000+(n-20)*8500);
	}
	else {
		printf("Tong tien : %d VND",10*6000+10*7000+10*8500+(n-30)*10000);
	}
}
