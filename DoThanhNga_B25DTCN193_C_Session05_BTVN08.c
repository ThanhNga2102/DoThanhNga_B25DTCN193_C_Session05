#include <stdio.h>
int main(){
	float waterUsage;
	int pricelevel1=6000;
	int pricelevel2=7000;
	int pricelevel3=8500;
	int pricelevel4=10000;
	int totalCost;
	printf("Nhap so khoi nuoc da tieu thu: ");
	scanf("%f",&waterUsage);
	if(waterUsage>0){
	if (waterUsage<=10){
		totalCost = waterUsage*pricelevel1;
		printf("Tong so tien nuoc phai tra: %dVND\n", totalCost);
	}
	else if (waterUsage<=20){
		totalCost = 10*pricelevel1 + (waterUsage-10)*pricelevel2;
		printf("Tong so tien nuoc phai tra: %dVND\n", totalCost);
	}
	else if (waterUsage<=30){
		totalCost = 10*pricelevel1 + 10*pricelevel2 + (waterUsage-20)*pricelevel3;
		printf("Tong so tien nuoc phai tra: %dVND\n",  totalCost);
	}
	else {
		totalCost = 10*pricelevel1 + 10*pricelevel2 + 10*pricelevel3 + (waterUsage-30)*pricelevel4;
		printf("Tong so tien nuoc phai tra: %dVND\n",totalCost);
	}
    }
	else{
		printf("So khoi nuoc khong hop le!\n");
	}
}

	