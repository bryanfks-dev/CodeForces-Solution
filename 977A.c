#include <stdio.h>

int main(){
    int number, tries;

    // Input number and tries here
    scanf("%d %d", &number, &tries);
    getchar();

    // The algorithm here
    while (tries) {
        int lastDigit = number % 10;

        // Conditional steps here
        if (lastDigit == 0) number /= 10;
        else number--;

        tries--;
    }

    // Print the output
    printf("%d\n", number);

    getchar();
    return 0;
}