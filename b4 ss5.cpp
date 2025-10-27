#include <stdio.h>
#include <math.h>
int main(){
	int thu_nhap;
	printf("Nhap muc thu nhap : ");
	scanf("%d",&thu_nhap);
	if(thu_nhap<=5){
		printf("Thue phai dong : %.2f",thu_nhap*0.05);
	}
	else if(thu_nhap<=10){
		printf("Thue phai dong : %.2f",thu_nhap*0.1);
	}
	else {
		printf("Thue phai dong : %.2f",thu_nhap*0.15);
	}
}

