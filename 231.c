#include <stdio.h>

int main(){
    int rowSize, input1, input2, input3;

    // Input row size here
    scanf("%d", &rowSize);
    getchar();

    int count = 0;
    for (int rowCounter = 1; rowCounter <= rowSize; rowCounter++) {
        // Input their answer
        scanf("%d %d %d", &input1, &input2, &input3);
        getchar();

        // Sum all answers
        input1 += input2 + input3;
        if (input1 >= 2) count++; // Add 1 value to count if there are 2 people sure about their answer
    }

    // Print the output
    printf("%d\n", count);

    getchar();
    return 0;
}