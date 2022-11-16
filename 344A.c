#include <stdio.h>

int main(){
    int magnets;

    // Input magnets count here
    scanf("%d", &magnets);
    getchar();

    int polesArr[magnets];

    for (int counter = 0; counter < magnets; counter++) {
        // Input magent poles here
        scanf("%d", &polesArr[counter]);
        getchar();
    }

    // Scanning magnet groups algorithm here
    int count = 0;
    for (int counter = 0; counter < magnets; counter++) {
        if (polesArr[counter] != polesArr[counter + 1]) count++;
    }

    // Print the output
    printf("%d\n", count);

    getchar();
    return 0;
}