#include <stdio.h>

int main(){
    int testCases;
    char string[101];
    
    // Test cases length here
    scanf("%d", &testCases);
    getchar();

    for (int caseCounter = 1; caseCounter <= testCases; caseCounter++) {
        // String input here
        scanf("%s", string);
        getchar();

        // Counting number algorithm here
        int count = 0, index = 0;
        while (string[index] != '\0') {
            if (index > 0) count++;
            index++;
        }

        // Decrease count value by one
        count--;

        // Print the result
        if (count <= 8) printf("%s\n", string);
        else printf("%c%d%c\n", string[0], count, string[count + 1]);
    }

    getchar();
    return 0;
}