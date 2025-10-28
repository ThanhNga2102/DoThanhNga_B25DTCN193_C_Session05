#include <stdio.h>
int main() {
	float salaryCoefficient;
	int workDays, reward, salary, position;
	printf("Nhap he so luong: ");
	scanf("%f",&salaryCoefficient);
	printf("Nhap so ngay cong trong thang: ");
	scanf("%d",&workDays);
	printf("Nhap chuc vu (1.Nhan vien/2.To truong/3.Quan ly): ");
	scanf("%d",&position);
	if (workDays>26){
		reward = 200000*(workDays-26);
	}
	else {
		reward = 0;
	}
	switch (position){
		case 1: 
			salary = workDays*160000*salaryCoefficient + 500000 + reward;
			break;
		case 2:
			salary = workDays*160000*salaryCoefficient + 1000000 + reward;
			break;
		case 3:
			salary = workDays*160000*salaryCoefficient + 2000000 + reward;
			break;
		default:
			printf("Chuc vu khong hop le");
			break;
	}
	printf("Tien luong cua ban la: %dVND\n", salary);
}