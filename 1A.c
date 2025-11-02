#include <stdio.h>
int main() {
    int n, i;
    int eSum = 0, oSum = 0;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(i % 2 == 0)
            eSum += arr[i];
        else
            oSum += arr[i];
    }
    printf("Sum of numbers at even index = %d\n", eSum);
    printf("Sum of numbers at odd index = %d\n", oSum);
    return 0;
}