#include <stdio.h>

int main(){
    long long number;

    // Input number here
    scanf("%lld", &number);
    getchar();

    // Counting number count here by digit
    int countFour = 0, countSeven = 0;
    while (number) {
        int lastDigit = number % 10; // Get the last digit of the given number

        // Add 1 value to 4 or 7 counter if the last digit is 4 or 7
        if (lastDigit == 7) countSeven++;
        else if (lastDigit == 4) countFour++;

        number /= 10; // Decrease the number digits by 1
    }

    // Print the output
    printf("%s\n", (countFour + countSeven == 4 || countFour + countSeven == 7) ? "YES" : "NO");

    getchar();
    return 0;
}