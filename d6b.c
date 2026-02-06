/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]*/

#include <stdio.h>

int main() {
    int n;
    int nums[100];

    printf("enter length of array  ");
    scanf("%d", &n);

    printf("Input array elements  ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int index = 0; 

    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[index] = nums[i];
            index++;
        }
    }

    while (index < n) {
        nums[index] = 0;
        index++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
