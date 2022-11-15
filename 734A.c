#include <stdio.h>

int main(){
    int games;

    // Input games length here
    scanf("%d", &games);
    getchar();

    char string[games + 1];

    // Input string here
    scanf("%s", string);
    getchar();

    // Counting algorithm here
    int index = 0, ACount = 0, DCount = 0;
    while (string[index] != '\0') {
        if (string[index] == 'A') ACount++;
        else DCount++;

        index++;
    }

    // Print the output
    printf("%s\n", (ACount == DCount) ? "Friendship" : ((ACount > DCount) ? "Anton" : "Danik"));

    getchar();
    return 0;
}