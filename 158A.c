#include <stdio.h>

int main(){
    int n, k, sum = 0;

    scanf("%d %d", &n, &k);
    getchar();

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        getchar();
    }

    int target = arr[k - 1];

    for (int j = 0; j < n; j++) {
        if (arr[j] >= target && arr[j] > 0) sum++;
    }

    printf("%d\n", sum);

    getchar();
    return 0;
}