#include <stdio.h>

int main(){
    int rooms, people, capacity;

    // Input rooms count here
    scanf("%d", &rooms);
    getchar();

    // Counting possibility for placing 2 people inside 1 room algorithm
    int count = 0;
    for (int counter = 1; counter <= rooms; counter++) {
        // Input people count and room capacity here
        scanf("%d %d", &people, &capacity);
        getchar();

        if (people + 2 <= capacity) count++; // If current people count plus 2 peoples is enough for the room capacity
    }

    // Print the output
    printf("%d\n", count);

    getchar();
    return 0;
}