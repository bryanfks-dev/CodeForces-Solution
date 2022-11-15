#include <stdio.h>

int main(){
    int length, width;

    // Input length and width here
    scanf("%d %d", &length, &width);
    getchar();

    // Print the ouput
    printf("%d\n", (int)(length * width / 2));

    getchar();
    return 0;
}