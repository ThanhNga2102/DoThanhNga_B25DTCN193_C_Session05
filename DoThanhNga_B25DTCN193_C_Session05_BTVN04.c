#include <stdio.h>
int main() {
    // Tinh so tien thue thu nhap phai dong
    float salary, tax_rate,tax;
    printf("So tien: ");
    scanf("%2f", &salary);
    if(0 < salary && salary <= 5) {
        tax_rate = 5.0/100;
    } else if(salary > 5 && 0 < salary && salary <= 10) {
        tax_rate = 10.0/100;
    } else {
        tax_rate = 15.0/100;
    }
    tax = salary * tax_rate;
    printf("Thue thu nhap phai dong: %.2f\n", tax);
    return 0;
}
