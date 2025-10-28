#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    printf("Nhap so a : ");
    scanf("%f", &a);
    printf("Nhap so b : ");
    scanf("%f", &b);
    printf("Nhap toan tu (+, -, *, /): ");
    scanf(" %c", &op); 
    switch (op) {
        case '+':
            result = a + b;
            printf("Result: %.2f + %.2f = %.2f\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("Result: %.2f - %.2f = %.2f\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("Result: %.2f * %.2f = %.2f\n", a, b, result);
            break;
        case '/':
            if (b == 0)
                printf("Loi: Khong the chia cho 0\n");
            else {
                result = a / b;
                printf("Result: %.2f / %.2f = %.2f\n", a, b, result);
            }
            break;
        default:
            printf("Loi: Toan tu khong hop le\n");
    }

    return 0;
}
