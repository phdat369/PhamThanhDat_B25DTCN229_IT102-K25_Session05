#include <stdio.h>
#include <math.h>
int main(){
	char c;
	printf("Nhap vaos 1 chu cai : ");
	scanf("%c",&c);
	if(c>='A' && c<='Z'){
		printf("%c",c+32);
	}
	else if(c>='a' && c<='z'){
		printf("%c",c-32);
	}
}
