#include <stdio.h>

int main(){
    int input;

    scanf("%d", &input);
    getchar();

    printf("%s\n", (input % 2 == 0 && input != 2) ? "YES" : "NO");

    getchar();
    return 0;
}