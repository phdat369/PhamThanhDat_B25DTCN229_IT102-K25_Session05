#include <stdio.h>
#include <math.h>
int main(){
	float a, b;
	printf("Nhap so thuc a : ");
	scanf("%f",&a);
	printf("Nhap so thuc b : ");
	scanf("%f",&b);
	if(a==0 && b==0){
		printf("Phuong trinh co vo so nghiem");
	}
	else if (a==0 && b!=0){
		printf("Phuong trinh vo nghiem");
	}
	else if (a!=0){
		printf("Phuong trinh co nghiem duy nhat x = %.2f",-b/a);
	}
}

