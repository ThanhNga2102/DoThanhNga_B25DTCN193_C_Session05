#include <stdio.h>

int main() {
    char letter1;
    // Nhap mot ky tu
    printf("Nhập một ký tự: ");
    scanf("%1c", &letter1);
    // Kiem tra va chuyen doi
    if (letter1 >= 'a' && letter1 <= 'z') {
        printf("Chữ hoa tương ứng: %c\n", letter1 - 32);
    } 
    else if (letter1 >= 'A' && letter1 <= 'Z') {
        printf("Chữ thường tương ứng: %c\n", letter1 + 32);
    } 
    else {
        printf("Không phải chữ cái.\n");
    }
    return 0;
}

    