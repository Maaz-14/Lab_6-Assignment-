#include <stdio.h>

int main() {
    int num, originalNum, remainder, result;
	result=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder; // cube of that digit + result which is initially 0...
        num /= 10; // removing that last didgit!!!!
    }

    if (result == originalNum)// ex: 1^3 +5^3+3^3==153 then ARMSTRONG Hai!!
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}




