/*
    Q0041 - Find Duplicate Elements in an Array

    Problem:
    Find duplicate values in an integer array.
    Print each duplicate value only once.

    Test Case 1:
    Input:  {1, 2, 3, 2, 4, 5, 3}
    Output: 2, 3

    Test Case 2:
    Input:  {1, 2, 2, 2, 4, 5, 5}
    Output: 2, 5

    Test Case 3:
    Input:  {1, 2, 3, 4, 5, 2, 2}
    Output: 2

    Test Case 4:
    Input:  {1, 2, 3, 4, 5, 6, 7}
    Output: No duplicate

    Test Case 5:
    Input:  {1, 1, 1, 1, 1, 1, 1}
    Output: 1

    Test Case 6:
    Input:  {1, 2, 3, 4, 5, 6, 6}
    Output: 6

    Approach:
    1. Check whether the current element appeared before.
    2. If already seen, skip it.
    3. Otherwise, check whether it appears later.
    4. If found, print it.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

#include <stdio.h>

int main(void)
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 6};

    for(int i = 0; i < 7; i++)
    {
        int alreadySeen = 0;

        // Check whether arr[i] appeared before
        for(int k = 0; k < i; k++)
        {
            if(arr[k] == arr[i])
            {
                alreadySeen = 1;
                break;
            }
        }

        // If already processed, skip this element
        if(alreadySeen)
            continue;

        // Check whether arr[i] appears later
        for(int j = i + 1; j < 7; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("duplicate value : %d\n", arr[i]);
                break;
            }
        }
    }

    return 0;
}