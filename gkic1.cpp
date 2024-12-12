#include <stdio.h>

int main() {
    char *names[] = {"Nguyen Van A", "Nguyen Van B", "Nguyen Van C"};
    float scores[3][5] = {
        {7.5, 7.0, 5.5, 8.5, 7.5}, 
        {7.0, 8.5, 9.0, 5.0, 6.5},
        {6.5, 7.2, 6.5, 10.0, 5.5}
    };

    printf("|%-3s|%-15s|%-6s|%-6s|%-6s|%-6s|%-6s|%-8s|\n", "STT", "Ho va Ten", "Toan", "Vat Ly", "Hoa", "Sinh", "Van", "Diem TB");
    printf("|---|---------------|------|------|------|------|------|--------|\n");

    for (int i = 0; i < 3; i++) {
        float avg = (scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3] + scores[i][4]) / 5.0;

        printf("|%-3d|%-15s|%-6.1f|%-6.1f|%-6.1f|%-6.1f|%-6.1f|%-8.1f|\n",
               i + 1, names[i], scores[i][0], scores[i][1], scores[i][2], scores[i][3], scores[i][4], avg);

        printf("|---|---------------|------|------|------|------|------|--------|\n");
    }

    return 0;
}
