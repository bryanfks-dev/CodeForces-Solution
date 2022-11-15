#include <stdio.h>

int main(){
    char str[1000];

    // Input string here
    scanf("%s", str);
    getchar();

    // Manipulate the first element of the string
    // Convert lowercase char into uppercase char
    if (str[0] >= 'a' && str[0] <= 'z') str[0] -= 32;

    // Print the output
    printf("%s\n", str);

    getchar();
    return 0;
}