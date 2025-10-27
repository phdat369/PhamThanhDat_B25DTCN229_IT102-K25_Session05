#include <stdio.h>
#include <math.h>
int main(){
	float he_so_luong ;
	int so_ngay_cong;
	int chuc_vu;
	printf("Nhap he so luong : ");
	scanf("%f",&he_so_luong);
	printf("Nhap so ngay cong :");
	scanf("%d",&so_ngay_cong);
	printf("Nhap chuc vu :");
	scanf("%d",&chuc_vu);
	if(chuc_vu==1){
		if(so_ngay_cong>26){
			printf("Luong : %.0f VND",so_ngay_cong*160000*he_so_luong+500000+(so_ngay_cong-26)*200000);
		}
		else {
			printf("Luong : %.0f VND",so_ngay_cong*160000*he_so_luong+500000);
		}
	}
	else if(chuc_vu==2){
		if(so_ngay_cong>26){
			printf("Luong : %.0f VND",so_ngay_cong*160000*he_so_luong+1000000+(so_ngay_cong-26)*200000);
		}
		else {
			printf("Luong : %.0f VND",so_ngay_cong*160000*he_so_luong+1000000);
		}
	}
	else if(chuc_vu==3){
		if(so_ngay_cong>26){
			printf("Luong : %.0f VND",so_ngay_cong*160000*he_so_luong+2000000+(so_ngay_cong-26)*200000);
		}
		else {
			printf("Luong : %.0f VND",so_ngay_cong*160000*he_so_luong+2000000);
		}
	}
}
