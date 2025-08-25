#include <stdio.h>

int swap(int *a, int n) {
    int count = 0;
    int max = a[0], max_index = 0;
    int min = a[0], min_index = 0;

    // Find max and min with correct indexes
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            max_index = i;
        }
        if (a[i] <= min) {
            min = a[i];
            min_index = i;
        }
    }

   
    if (min_index < max_index) {
        min_index++; 

    count += max_index;         
    count += (n - 1 - min_index); 

    return count;
}
}

int main() 
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("%d\n", swap(a, n));
    return 0;
}
