#include <stdio.h>

int main(){
    int numChild, queue;

    // Input number of child and time here
    scanf("%d %d", &numChild, &queue);
    getchar();

    char string[numChild + 1];

    // Input string here
    scanf("%s", string);
    getchar();

    // Replacing char algorithm
    while (queue) {
        for (int counter = 1; counter < numChild; counter++) {
            if (string[counter] == 'G' && string[counter - 1] == 'B') {
                string[counter] = 'B';
                string[counter - 1] = 'G';

                counter++;
            }
        }
        
        queue--;
    }

    // Print the output
    printf("%s\n", string);

    getchar();
    return 0;
}