/*
    Q0042 — Find Missing Number

    Problem:
    Given a sorted array containing unique integers that form a
    continuous range, find the missing number in the range.

    Test case: 1    Input:  {1, 2, 3, 5, 6}    Output: 4

    Test case: 2    Input: {5, 6, 7, 8, 10}    Output: 9

    Test case: 3    Input: {5, 6, 7, 9, 10}    Output: 8

    Test case: 4    Input: {1, 2, 4}           Output: 3

    Test case:5     Input: {2, 3, 4, 5}        Output: no missing

    Test case: 6    Input: {1, 2, 2, 4, 5}     Output: invalid input

    Test case: 7    Input: {1, 2, 2, 4, 5}     Output: invalid input

    Approach:
    1. Calculate the expected sum of all numbers from the first
       element to the last element.
    2. Calculate the actual sum of the array elements.
    3. The difference between the expected sum and actual sum
       gives the missing number.
    4. If both sums are equal, there is no missing number.
    
    Input assumptions:
    - Array is sorted.
    - Values are unique.
    - Values form a continuous range.
    - Exactly zero or one value can be missing.

    Time Complexity  : O(n)
    Space Complexity : O(1)
*/

#include<stdio.h>

void findMissingNumber(int arrData[], int arrLen)
{
    int sumExpect = 0;
    int sumActual = 0;
    
    for(int i= arrData[arrLen-1]; i >= arrData[0]; i--){
        sumExpect += i;
    }

    for(int i=0; i < arrLen; i++)
        sumActual += arrData[i];

    if(sumExpect == sumActual)
        printf("NO missing number\n");
    else
        printf("Found the missing number: %d \n", (sumExpect - sumActual));

}

int main()
{
    int arr1[] = {1, 2, 3, 5, 6};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    findMissingNumber(arr1, n);

    int arr2[] = {5, 6, 7, 8, 10};
    n = sizeof(arr2) / sizeof(arr2[0]);
    findMissingNumber(arr2, n);

    int arr3[] = {5, 6, 7, 9, 10};
    n = sizeof(arr3) / sizeof(arr3[0]);
    findMissingNumber(arr3, n);

    int arr4[] = {1, 2, 4};
    n = sizeof(arr4) / sizeof(arr4[0]);
    findMissingNumber(arr4, n);

    int arr5[] = {2, 3, 4, 5};
    n = sizeof(arr5) / sizeof(arr5[0]);
    findMissingNumber(arr5, n);

    int arr6[] = {1, 2, 2, 4, 5};
    n = sizeof(arr6) / sizeof(arr6[0]);
    findMissingNumber(arr6, n);
    

    return 0;
}