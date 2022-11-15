#include <stdio.h>

int main(){
    int price, money, banana;

    // Input banana price, money he bought, and many banana he bought
    scanf("%d %d %d", &price, &money, &banana);
    getchar();

    // Algorithm here
    int dollars = 0;
    for (int counter = 1; counter <= banana; counter++) {
        dollars += counter * price; // Sum all banana prices
    }

    // Print the output
    printf("%d\n", (dollars < money) ? 0 : dollars - money);

    getchar();
    return 0;
}