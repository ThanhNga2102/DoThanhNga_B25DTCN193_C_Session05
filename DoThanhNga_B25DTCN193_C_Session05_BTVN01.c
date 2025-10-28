#include <stdio.h>
int main() {
    int numbera, numberb;
    printf("Nhap so a: ");
    scanf("%d", &numbera);
    printf("Nhap so b: ");
    scanf("%d", &numberb);
   //So sanh 2 so
    if (numbera > numberb) {
        printf("So lon hon la %d\n", numbera);
    } else if (numbera == numberb) {
        printf("Hai so bang nhau\n");
    } else {
        printf("So lon hon la %d\n", numberb);
    }
    return 0;
}