#include <stdio.h>

int main(){
    char str[101], numStr[51];

    // Input string here
    scanf("%s", str);
    getchar();

    // Get the numbers from the string and push it into other string
    int index = 0, pushIdx = 0;
    while (str[index] != '\0') {
        if (str[index] >= '1' && str[index] <= '3') {
            numStr[pushIdx] = str[index];
            pushIdx++;
        }

        index++;
    }

    numStr[pushIdx] = '\0'; // Set null char in the end of the string

    index--;

    // Sorting number char algorithm here
    for (; index >= 0; index--) {
        if (index % 2 == 0) {
            // Search for the maximum number in the string
            int counter = 0, maxIdx = 0;
            while (numStr[counter] != '\0') {
                if (numStr[maxIdx] < numStr[counter]) {
                    maxIdx = counter;
                }
                counter++;
            }

            // Set current element with the max value
            str[index] = numStr[maxIdx];
            numStr[maxIdx] = '0'; // Replace the max value's index in numStr with '0'
        }
    }

    // Print the output
    printf("%s\n", str);

    getchar();
    return 0;
}