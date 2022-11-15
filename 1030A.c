#include <stdio.h>

int main(){
    int person, input;

    // Input person count here
    scanf("%d", &person);
    getchar();

    // Counting input algorithm here
    int count0 = 0, count1 = 0;
    for (int counter = 1; counter <= person; counter++) {
        // Input what's person think about the problem here
        scanf("%d", &input);
        getchar();

        if (input == 1) count1++;
        else count0++;
    }

    // Print the output
    printf("%s\n", (count1 >= 1) ? "HARD" : "EASY");

    getchar();
    return 0;
}