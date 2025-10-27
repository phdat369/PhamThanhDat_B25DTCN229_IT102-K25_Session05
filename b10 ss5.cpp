#include <stdio.h>
#include <math.h>
int main(){
	int so_dien;
	int ho_tieu_dung;
	printf("Nhap so dien :  ");
	scanf("%d",&so_dien);	
	printf("Nhap ho tieu dung : ");
	scanf("%d",&ho_tieu_dung);
	if(ho_tieu_dung==1){
		if(so_dien<=50){
			printf("Tien dien : %.0f",so_dien*1500*1.05);
		}
		else if(so_dien<=100){
			printf("Tien dien : %.0f",(50*1500+(so_dien-50)*2000)*1.05);
		}
		else if(so_dien<=200){
			printf("Tien dien : %.0f",(50*1500+50*2000+(so_dien-100)*2500)*1.05);
		}
		else{
			printf("Tien dien : %.0f",(50*1500+50*2000+100*2500*(so_dien-200)*3000)*1.05);
		}
	}
	if(ho_tieu_dung==2){
		if(so_dien<=50){
			printf("Tien dien : %.0f",so_dien*1500*1.1);
		}
		else if(so_dien<=100){
			printf("Tien dien : %.0f",(50*1500+(so_dien-50)*2000)*1.1);
		}
		else if(so_dien<=200){
			printf("Tien dien : %.0f",(50*1500+50*2000+(so_dien-100)*2500)*1.1);
		}
		else{
			printf("Tien dien : %.0f",(50*1500+50*2000+100*2500*(so_dien-200)*3000)*1.1);
		}
	}
	if(ho_tieu_dung==3){
		if(so_dien<=50){
			printf("Tien dien : %.0f",so_dien*1500*1.08);
		}
		else if(so_dien<=100){
			printf("Tien dien : %.0f",(50*1500+(so_dien-50)*2000)*1.08);
		}
		else if(so_dien<=200){
			printf("Tien dien : %.0f",(50*1500+50*2000+(so_dien-100)*2500)*1.08);
		}
		else{
			printf("Tien dien : %.0f",(50*1500+50*2000+100*2500*(so_dien-200)*3000)*1.08);
		}
	}
}

