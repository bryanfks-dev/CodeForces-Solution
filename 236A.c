#include <stdio.h>

int main(){
    char str[101];

    // Input string here
    scanf("%s", str);
    getchar();

    // Modify string check for same char
    for (int counter = 0; str[counter] != '\0'; counter++) {
        for (int counter1 = counter + 1; str[counter1] != '\0'; counter1++) {
            if (str[counter] == str[counter1]) str[counter] = '0';
        }
    }

    // Count the string length without 0 char elements
    int index = 0, count = 0;
    while (str[index] != '\0') {
        if (str[index] >= 'a' && str[index] <= 'z') count++;

        index++;
    }

    // Print the output depends on the count value
    printf("%s\n", (count % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!");

    getchar();
    return 0;
}