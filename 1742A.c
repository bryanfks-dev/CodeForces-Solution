#include <stdio.h>

int main(){
    int testCases;

    scanf("%d", &testCases);
    getchar();
    
    int arr[testCases][3];

    for (int counter = 0; counter < testCases; counter++) {
        for (int counter1 = 0; counter1 < 3; counter1++) {
            scanf("%d", &arr[counter][counter1]);
            getchar();
        }
    }

    // This is the searching algorithm
    for (int row = 0; row < testCases; row++) {
        printf("%s\n", (arr[row][0] + arr[row][1] == arr[row][2] || 
        arr[row][0] + arr[row][2] == arr[row][1] || 
        arr[row][1] + arr[row][2] == arr[row][0]) ? "YES" : "NO");
    }

    getchar();
    return 0;
}