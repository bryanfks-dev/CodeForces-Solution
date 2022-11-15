#include <stdio.h>

int main(){
    int cases, exitPas, enterPas;

    // Input cases here
    scanf("%d", &cases);
    getchar();

    // Algorithm here
    int maxPas = 0, currentPas = 0;
    for (int caseCounter = 1; caseCounter <= cases; caseCounter++) {
        // Input exit passenger and enter passenger count here
        scanf("%d %d", &exitPas, &enterPas);
        getchar();

        if (caseCounter == 1) currentPas = exitPas; // Set current passenger count as exit passenger count in the first stop
        else currentPas -= exitPas; // Subtract current passenger count with exit passenger count

        currentPas += enterPas; // Add current passenger with enter passenger count

        if (maxPas < currentPas) maxPas = currentPas; // Search for the maximum passenger count
    }

    // Print the output
    printf("%d\n", maxPas);

    getchar();
    return 0;
}