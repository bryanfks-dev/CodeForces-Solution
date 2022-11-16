#include <stdio.h>

int main(){
    char num1[101], num2[101];

    // Input num1 here
    scanf("%s", num1);
    getchar();

    // Input num2 here
    scanf("%s", num2);
    getchar();

    // XOR algorithm here
    int index = 0;
    while (num1[index] != '\0') {
        num1[index] = (char)((((int)num1[index] - 48) ^ ((int)num2[index] - 48)) + 48);

        index++;
    }

    // Print the result here
    printf("%s\n", num1);

    getchar();
    return 0;
}