#include <stdio.h>

int main() {
    int choice;
    float amount, result;

    printf("==============CHUONG TRINH CHUYEN DOI TIEN TE============\n");
    printf("1. USD to VND\n");
    printf("2. EUR to VND\n");
    printf("3. GBP to VND\n");
    printf("4. JPY to VND\n");
    printf("5. VND to USD\n");
    printf("6. VND to EUR\n");
    printf("7. VND to GBP\n");
    printf("8. VND to JPY\n");
    printf("Nhap don vi tien te ban muon chuyen doi (1-8) ? ");
    scanf("%d", &choice);

    printf("Nhap so tien can chuyen doi: ");
    scanf("%f", &amount);

    switch (choice) {
        case 1:
            result = amount * 25368;
            printf("%.2f USD = %.2f VND\n", amount, result);
            break;
        case 2:
            result = amount * 26651;
            printf("%.2f EUR = %.2f VND\n", amount, result);
            break;
        case 3:
            result = amount * 32386;
            printf("%.2f GBP = %.2f VND\n", amount, result);
            break;
        case 4:
            result = amount * 167;
            printf("%.2f JPY = %.2f VND\n", amount, result);
            break;
        case 5:
            result = amount / 25368;
            printf("%.2f VND = %.2f USD\n", amount, result);
            break;
        case 6:
            result = amount / 26651;
            printf("%.2f VND = %.2f EUR\n", amount, result);
            break;
        case 7:
            result = amount / 32386;
            printf("%.2f VND = %.2f GBP\n", amount, result);
            break;
        case 8:
            result = amount /167;
            printf("%.2f VND = %.2f JPY\n", amount, result);
            break;
        default:
            printf("Lua chon khong hop le.\n");
    }

    return 0;
}