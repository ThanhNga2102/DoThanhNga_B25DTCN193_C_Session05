#include <stdio.h>
int main() {
    int point;
    // Xep loai hoc luc
    printf("Nhap diem : ");
    scanf("%d", &point);
    if(10 > point && point >= 8) {
        printf("Hoc luc gioi\n");
    } else if(8 > point && point >= 6.5) {
        printf("Hoc luc kha\n");
    } else if(6.5 > point && point >= 5) {
        printf("Hoc luc trung binh\n");
    } else if(0 < point && point < 5) {
        printf("Hoc luc yeu\n");
    } else {
        printf("Diem khong hop le\n");
    }
    return 0;
}