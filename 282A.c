#include <stdio.h>

int main(){
    int cases, count = 0;
    char statement[4];

    // Input case length here
    scanf("%d", &cases);
    getchar();

    for (int caseCounter = 1; caseCounter <= cases; caseCounter++) {
        // Input statement here
        scanf("%s", statement);
        getchar();

        // Counting algorithm here
        if (statement[0] == '+' || statement[2] == '+') count++;
        else count--;
    }

    // Print the output
    printf("%d\n", count);

    getchar();
    return 0;
}