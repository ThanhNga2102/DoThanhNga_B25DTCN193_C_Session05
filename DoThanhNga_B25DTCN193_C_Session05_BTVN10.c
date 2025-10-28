#include <stdio.h>

int main() {
    // Khai báo biến
    float electricityUsage, totalCost = 0, surcharge, finalBill;
    int consumerType;

    // Hằng số
    const float ADDITIONAL_FEE_FAMILY = 0.05;
    const float ADDITIONAL_FEE_BUSINESS = 0.10;
    const float ADDITIONAL_FEE_PRODUCTION = 0.08;
    const float PRICE_LEVEL_1 = 1500;
    const float PRICE_LEVEL_2 = 2000;
    const float PRICE_LEVEL_3 = 2500;
    const float PRICE_LEVEL_4 = 3000;

    // Nhập dữ liệu
    printf("Nhap so dien tieu thu trong thang (kWh): ");
    scanf("%f", &electricityUsage);
    printf("Nhap loai ho tieu dung (1: Gia dinh, 2: Kinh doanh, 3: San xuat): ");
    scanf("%d", &consumerType);

    // Tính tiền điện theo bậc thang
    if (electricityUsage <= 50) {
        totalCost = electricityUsage * PRICE_LEVEL_1;
    } else if (electricityUsage <= 100) {
        totalCost = 50 * PRICE_LEVEL_1 + (electricityUsage - 50) * PRICE_LEVEL_2;
    } else if (electricityUsage <= 200) {
        totalCost = 50 * PRICE_LEVEL_1 + 50 * PRICE_LEVEL_2 + (electricityUsage - 100) * PRICE_LEVEL_3;
    } else {
        totalCost = 50 * PRICE_LEVEL_1 + 50 * PRICE_LEVEL_2 + 100 * PRICE_LEVEL_3 + (electricityUsage - 200) * PRICE_LEVEL_4;
    }

    // Tính phụ phí theo loại hộ tiêu dùng
    switch (consumerType) {
        case 1: // Hộ gia đình
            surcharge = totalCost * ADDITIONAL_FEE_FAMILY;
            break;
        case 2: // Hộ kinh doanh
            surcharge = totalCost * ADDITIONAL_FEE_BUSINESS;
            break;
        case 3: // Hộ sản xuất
            surcharge = totalCost * ADDITIONAL_FEE_PRODUCTION;
            break;
        default:
            printf("Loai ho tieu dung khong hop le!\n");
            return 1;
    }

    // Tổng tiền điện phải trả
    finalBill = totalCost + surcharge;

    // In kết quả
    printf("\n=== HOA DON TIEN DIEN ===\n");
    printf("So dien tieu thu: %.2f kWh\n", electricityUsage);
    printf("Tien theo bac thang: %.2f VND\n", totalCost);
    printf("Phu phi: %.2f VND\n", surcharge);
    printf("Tong tien phai tra: %.2f VND\n", finalBill);

    return 0;
}
