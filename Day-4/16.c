#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    if (num < 0) return 0; 

    int original_num = num;
    int remainder;
    int digits = 0;
    double result = 0.0;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    
    return ((int)round(result) == original_num);
}

int main() {
    int start, end;
    int count = 0;
    printf("Enter lower bound (start): ");
    if (scanf("%d", &start) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter upper bound (end): ");
    if (scanf("%d", &end) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (start > end) {
        int temp = start;
        start = end;
        end = temp;
    }

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (is_armstrong(i)) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0) {
        printf("None found in this range.");
    }
    
    printf("\n");
    return 0;
}