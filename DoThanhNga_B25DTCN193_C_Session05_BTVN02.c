#include <stdio.h>
int main() {
    int numbera,numberb;
    // Giai phuong trinh bac nhat ax + b = 0
    printf("Nhap so a: ");
    scanf("%d",&numbera);
    printf("Nhap so b: ");
    scanf("%d",&numberb);
    if(numbera == 0) {
        if(numberb == 0) {
            printf("Phuong trinh vo so nghiem\n");
        } else if(numberb != 0){
            printf("Phuong trinh vo nghiem\n");     
        }
    } else {
        float nghiem = (float)-numberb/numbera;
        printf("Phuong trinh co nghiem x = %.f\n", nghiem);
    }
    return 0;
}