#include <stdio.h>

int main() {
    float sogiolam, mucluonggio, luongcoban, phucap, tongluong;

    printf("Nhap so gio lam trong thang: ");
    scanf("%f", &sogiolam);

    printf("Nhap muc luong theo gio: ");
    scanf("%f", &mucluonggio);

    luongcoban = sogiolam * mucluonggio;

    if (sogiolam > 160) {
        phucap = luongcoban * 0.1;
        tongluong = luongcoban + phucap;
    } else {
        phucap = 0;
        tongluong = luongcoban;
    }

    printf("luong co ban: %.2f\n", luongcoban);
    printf("Phu cap: %.2f\n", phucap);
    printf("Tong luong: %.2f\n", tongluong);

    return 0;
}