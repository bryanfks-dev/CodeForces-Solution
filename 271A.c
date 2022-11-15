#include <stdio.h>

int main(){
    int year, arr[4];

    // Input year here
    scanf("%d", &year);
    getchar();

    // Search for distinct digits algorithm
    for (int counter = year + 1; counter ; counter++) {
        int temp = counter, digits = 0, index = 0;

        // Push 1 by 1 year digits into an array
        while (temp) {
            digits++;

            arr[index] = temp % 10;
            temp /= 10;

            index++;
        }

        // Check for same number inside array
        int isSame = 0;
        for (int counter1 = 0; counter1 < index; counter1++) {
            for (int counter2 = counter1 + 1; counter2 <= index; counter2++) {
                if (arr[counter1] == arr[counter2]) {
                    isSame = 1;
                    break;
                }
            }
            if (isSame) break;
        }

        // Print the output if there is no same digits in the array
        if (!isSame) {
            printf("%d\n", counter);
            break;
        }
    }

    getchar();
    return 0;
}