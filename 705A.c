#include <stdio.h>

int main(){
    int count; // Input count here

    scanf("%d", &count);
    getchar();

    for (int counter = 1; counter <= count; counter++) {
        // Print main words
        if (counter % 2 == 1) printf("I hate");
        else printf("I love");

        // Print the adjective
        if (counter == count) printf(" it\n");
        else printf(" that ");
    }

    getchar();
    return 0;
}