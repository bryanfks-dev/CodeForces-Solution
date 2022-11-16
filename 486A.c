#include <stdio.h>

int main(){
    long long num;

    // Input number here
    scanf("%lld", &num);
    getchar();

    // Print the result
    printf("%lld\n", (num % 2 == 0) ? num / 2 : -((num + 1) / 2));

    getchar();
    return 0;
}