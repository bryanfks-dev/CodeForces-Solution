#include <stdio.h>

int main(){
    int stones;
    char colors[51];

    // Input stones count here
    scanf("%d", &stones);
    getchar();

    // Input the stones colors here in string type
    scanf("%s", colors);
    getchar();

    // Check whenever all colors are the same
    int count = 0, index = 0;
    while (colors[index] != '\0') {
        if (colors[index] == colors[0]) count++;
        
        index++;
    }

    index = 0; // Reset index value
    if (count != stones) { // Assume all colors aren't same
        count = 0;
        // Deletation stones algorithm here
        while (colors[index] != '\0') {
            // Assume there are 3 same stone colors in a row
            if (index % 2 == 1 && (colors[index] == colors[index - 1] && colors[index] == colors[index + 1])) {
                count += 2;
            }
            // Assume there are 2 same stone color in a row
            else if (index % 2 == 1 && (colors[index] == colors[index - 1] || colors[index] == colors[index + 1])) { 
                count++;
            }
            index ++;
        }
    }
    else count--; // Subtract 1 value from count value

    // Print the output here
    printf("%d\n", count);

    getchar();
    return 0;
}