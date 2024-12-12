#include <stdio.h>

int main() {
    float time, luong, luongcoban, phucap = 0.0;
    printf("Nhap so gio lam viec trong thang: ");
    scanf("%f", &time);
    printf("Nhap muc luong theo gio: ");
    scanf("%f", &luong);
    luongcoban = time * luong;
    if (time > 160) {
        phucap = luongcoban * 0.10;
    }
    float tongtienluong = luongcoban + phucap;
    printf("Luong co ban: %.2f\n", luongcoban);
    printf("Phu cap: %.2f\n",phucap);
    printf("Tong tien luong: %.2f\n", tongtienluong);

    return 0;
}

