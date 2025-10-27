#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	char c;
	printf("Nhap 2 so thuc a va b : ");
	scanf("%f%f",&a,&b);
	printf("Nhap toan tu :");
	scanf("%s",&c);
	if(c=='/' && b==0){
		printf("Khong the chia cho 0");
	}
	switch(c){
		case '+' :
			printf("Ket qua cua phep tinh la : %.2f",a+b);
			break;
		case '-' :
			printf("Ket qua cua phep tinh la : %.2f",a-b);
			break;
		case '*' :
			printf("Ket qua cua phep tinh la : %.2f",a*b);
			break;
		case '/' :
			printf("Ket qua cua phep tinh la : %.2f",a/b);
			break;
	    default:
		printf("Toan tu khong hop le");
		break;
	}
}
