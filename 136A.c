#include <stdio.h>

int main(){
    int friends, num;

    // Input friends count here
    scanf("%d", &friends);
    getchar();

    int numFriend[friends];

    // Setting array element algorithm here
    for (int counter = 1; counter < friends + 1; counter++) {
        // Input the number of a friend here
        scanf("%d", &num);
        getchar();

        numFriend[num - 1] = counter;
    }

    // Print the output algorithm
    for (int counter = 0; counter < friends; counter++) {
        printf("%d", numFriend[counter]);
        if (counter != friends - 1) printf(" ");
        else printf("\n");
    }

    getchar();
    return 0;
}