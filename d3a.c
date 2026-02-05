/*Linear Search with Comparison Count

Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.

Input:
- First line: integer n (array size)
- Second line: n space-separated integers
- Third line: integer k (key to search)

Output:
- Line 1: "Found at index i" OR "Not Found"
Line 2: "Comparisons = c"

Example:
Input:
5
10 20 30 40 50
30

Output:
Found at index 2
Comparisons = 3

Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)*/
#include <stdio.h>

int main() {
    int n, k, comp = 0, f = -1;
    printf("enter the length of array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter elements of array :");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("enter key to search");
    scanf("%d", &k);

    for (int i = 0; i < n; i++) {
        comp++;
        if (arr[i] == k) {
            f = i;
            break;
        }
    }

    if (f != -1)
        printf("Found at index %d\n", f);
    else
        printf("Not Found\n");

    printf("Comparisons = %d", comp);

    return 0;
}
