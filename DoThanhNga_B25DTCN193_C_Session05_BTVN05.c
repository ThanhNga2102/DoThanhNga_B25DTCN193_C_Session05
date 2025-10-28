#include <stdio.h>

int main() {
    int age;
    float fare;
    const float baseFare = 20000;

    printf("Nhap tuoi: ");
    scanf("%d", &age);

    if (age < 0 || age > 120) {
        printf("Tuoi khong hop le\n");
    } else {
        if (age < 6) {
            fare = 0;
        } else if (6 < age && age <= 18) {
            fare = baseFare * 0.5;
        } else if (19 < age && age <= 60) {
            fare = baseFare;
        } else {
            fare = baseFare * 0.7;
        }

        printf("So tien ve: %.0f VND\n", fare);
    }

    return 0;
}
