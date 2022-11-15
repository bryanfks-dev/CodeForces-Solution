#include <stdio.h>

int main(){
    int limak, bob;

    // Input limak and bob current weight
    scanf("%d %d", &limak, &bob);
    getchar();

    // Years conunter algorithm here
    int count = 0;
    while (limak <= bob) {
        limak *= 3; // Multiply limak's weight by 3 every year
        bob *= 2; // Multiply bob's weight by 2 every year

        count++; // Add 1 year
    }

    // Print the output 
    printf("%d\n", count);

    getchar();
    return 0;
}