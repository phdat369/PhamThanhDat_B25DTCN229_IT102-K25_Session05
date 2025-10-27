#include <stdio.h>
#include <math.h>
int main(){
	int tuoi;
	printf("Nhap tuoi : ");
	scanf("%d",&tuoi);
	if(tuoi<0 || tuoi>200){
		printf("Tuoi khong hop le");
	}
	else if(tuoi<6){
		printf("So tien ve : %d VND",20000*0);
	}
	else if(tuoi>=6 && tuoi<=18){
		printf("So tien ve : %d VND",20000*1/2);
	}
	else if (tuoi>18 && tuoi<=60){
		printf("So tien ve : %d VND",20000);
	}
	else {
		printf("So tien ve : %d",20000*7/10);
	}
}

