#include <stdio.h>
#include <math.h>
int main(){
	float diem;
	printf("Nhap Diem : ");
	scanf("%f",&diem);
	if(diem>=8){
		printf("Hoc luc gioi");
	}
	else if(diem>=6.5){
		printf("Hoc luc kha");
	}
	else if(diem>=5){
		printf("Hoc luc trung binh");
	}
	else {
		printf("Hoc luc yeu");
	}
}
