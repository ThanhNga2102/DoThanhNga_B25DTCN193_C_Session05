#include <stdio.h>
int main() {
    // Tinh so tien thue thu nhap phai dong
    float thu_nhap, thue;
    printf("So tien: ");
    scanf("%2f", &thu_nhap);
    if(0 < thu_nhap && thu_nhap <= 5) {
        thue = thu_nhap * (5.0/100);
    } else if(thu_nhap > 5 && 0 < thu_nhap && thu_nhap <= 10) {
        thue = thu_nhap * (10.0/100);
    } else {
        thue = thu_nhap * (15.0/100);
    }
    printf("Thue thu nhap phai dong: %.2f\n", thue);
    return 0;
}