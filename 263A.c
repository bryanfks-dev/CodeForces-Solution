#include <stdio.h>

int main(){
    int matrix[5][5], rowIdx, colIdx;

    // input matrix values here
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            scanf("%d", &matrix[row][col]);
            getchar();

            if (matrix[row][col] == 1) { // If the number 1 is found then store the index
                rowIdx = row;
                colIdx = col;
            }
        }
    }

    int count = 0; // This is the step counter of the minimum value that required for the number 1 swapped into the middle of the matrix
    // Move the number 1 respect to the y-axis to the middle row
    while (rowIdx != 2) {
        (rowIdx > 2) ? rowIdx-- : rowIdx++;
        count++;
    }

    // Move the number 1 respect to the x-axis to the middle col
    while (colIdx != 2) {
        (colIdx > 2) ? colIdx-- : colIdx++;
        count++;
    }

    // Print the output
    printf("%d\n", count);

    getchar();
    return 0;
}