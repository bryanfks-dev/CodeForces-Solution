#include <stdio.h>

int main(){
    int x, count;

    // Input x point
    scanf("%d", &x);
    getchar();

    // Print the output
    int div = x / 5;
    printf("%d\n", (x % 5 == 0) ? div : div + 1);

    getchar();
    return 0;
}