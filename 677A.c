#include <stdio.h>

int main(){
    int numPers, fenceHeight, persHeight;

    // Input person count and fence height here
    scanf("%d %d", &numPers, &fenceHeight);
    getchar();

    // Count the required minimum width of the road algorithm
    int count = 0;
    for (int counter = 1; counter <= numPers; counter++) {
        // Input person height here
        scanf("%d", &persHeight);
        getchar();

        if (fenceHeight >= persHeight) count++;
        else count += 2;
    }

    // Print the output
    printf("%d\n", count);

    getchar();
    return 0;
}