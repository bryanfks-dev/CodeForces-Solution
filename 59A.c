#include <stdio.h>

int main(){
    char str[101];

    // Input string here
    scanf("%s", str);
    getchar();
    
    // Scan for lowercase count and uppercase count
    int index = 0, upperCount = 0, lowerCount = 0;
    while (str[index] != '\0') {
        if (str[index] >= 'A' && str[index] <= 'Z') upperCount++;
        else lowerCount++;
    
        index++;
    }

    if (lowerCount >= upperCount) {
        // Replacing char algorithm here
        index = 0; // Reset index value
        while (str[index] != '\0') {
            // Assume the selected char is an uppercase, then convert it to lowercase
            if (str[index] >= 'A' && str[index] <= 'Z') str[index] += 32;

            index++;
        }
    }
    else {
        // Replaceing char algorithm here
        index = 0; // Reset index value
        while (str[index] != '\0') {
            // Assume the selected char is a lowecase, then convert it to uppercase
            if (str[index] >= 'a' && str[index] <= 'z') str[index] -= 32;

            index++;
        }
    }

    // Print the output
    printf("%s\n", str);

    getchar();
    return 0;
}