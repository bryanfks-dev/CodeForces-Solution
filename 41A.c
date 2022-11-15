#include <stdio.h>

int main(){
    char string1[101], string2[101];

    // Input string1 here
    scanf("%s", string1);
    getchar();

    // Input string2 here
    scanf("%s", string2);
    getchar();

    int arrow1 = 0, arrow2 = 0; // Use arrow1 as left or bottom pointer and arrow2 as right or top pointer
    // Count string length and store it to an integer variable
    while (string1[arrow2] != '\0') {
        arrow2++;
    }

    arrow2--; // Decrease arrow2 value by 1

    // Check palindrome algorithm
    int isNotSame = 0;
    while (string1[arrow1] != '\0') {
        if (string1[arrow1] != string2[arrow2]) isNotSame++; // Add isNotSame value by 1 if selected char in string1 is not same as selected char in string2

        arrow1++; // Add 1 value to arrow1
        arrow2--; // Subtract 1 value from arrow2
    }

    // Print the output
    printf("%s\n", (isNotSame == 0) ? "YES" : "NO");

    getchar();
    return 0;
}