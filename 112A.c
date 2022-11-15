#include <stdio.h>

int main(){
    char str1[101], str2[101];

    // Input the first string here
    scanf("%s", str1);
    getchar();

    // Input the second string here
    scanf("%s", str2);
    getchar();

    // Scanning algorithm here
    int index = 0;
    while (str1[index] != '\0') {
        // Assume the selected char is uppercase char, so conovert it to lowercase
        if (str1[index] <= 'Z') str1[index] += 32;
        if (str2[index] <= 'Z') str2[index] += 32;

        if (str1[index] > str2[index]) {
            printf("1\n");
            index = 0;
            break;
        }
        else if (str1[index] < str2[index]) {
            printf("-1\n");
            index = 0;
            break;
        }

        index++;
    }

    if (index > 0) printf("0\n");

    getchar();
    return 0;
}