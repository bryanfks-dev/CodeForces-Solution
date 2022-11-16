#include <stdio.h>

int main(){
    int orangeDrinks, volFrac, percent = 0;

    // Input orange drinks count here
    scanf("%d", &orangeDrinks);
    getchar();

    for (int counter = 1; counter <= orangeDrinks; counter++) {
        // Input volume fraction here
        scanf("%d", &volFrac);
        getchar();

        // Add percentage
        percent += volFrac;
    }

    // Print the result
    printf("%.12f\n", (float)percent / orangeDrinks);

    getchar();
    return 0;
}