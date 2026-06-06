#include <stdio.h>

int main() {
 float rows = 5;

    for (float i = rows; i >= 1; i--) {
        for (float j = 1; j <=rows - i; j++) {
            printf(" ");
        }
        for (float k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}