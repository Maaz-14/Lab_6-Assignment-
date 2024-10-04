#include <stdio.h>

int main() {
    int num, reversedNum = 0,originalNum,remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    do {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("The reverse of %d is %d.\n", originalNum, reversedNum);

    return 0;
}
