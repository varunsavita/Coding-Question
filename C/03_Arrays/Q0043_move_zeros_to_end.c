/*
    Q0043 — Move All Zeros to the End

    Problem:
    Given an integer array, move all 0 elements to the end 
    while maintaining the relative order of the non-zero elements.

    TC1:    i/p: {0, 1, 0, 3, 12}       o/p: {1, 3, 12, 0, 0}
    TC2:    i/p: {1, 0, 2, 0, 3}        o/p: {1, 2, 3, 0, 0}
    TC3:    i/p: {1, 2, 3, 4, 5}        o/p: {1, 2, 3, 4, 5}
    TC4:    i/p: {0, 0, 0, 0}           o/p: {0, 0, 0, 0}
    TC5:    i/p: {1, 2, 0, 3, 0, 4}     o/p: {1, 2, 3, 4, 0, 0}
    
    Approach:
    1. Traverse the array from left to right.
    2. When a zero is found, search for the first non-zero
       element to its right.
    3. Swap the zero with that non-zero element.
    4. Continue until the end of the array.

    Time Complexity  : O(n^2)
    Space Complexity : O(1)
*/

#include<stdio.h>

void swapNumber(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveZeroToEnd(int arrdata[], int arrlen){

    for(int i= 0; i < arrlen-1; i++)
    {
        if(arrdata[i] == 0)
        {
            for(int j=i+1; j < arrlen; j++)
            {
                if(arrdata[j] != 0){
                    swapNumber(&arrdata[i], &arrdata[j]);
                    break;
                }
            }
            
        }
    }
}
void display(int arrdata[], int arrLen)
{
    for (int i = 0; i < arrLen; i++)
        printf(" %d ", arrdata[i]);

    printf(" \n ");
}


int main()
{
    int arr1[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    moveZeroToEnd(arr1, n);
    display(arr1, n);

    int arr2[] = {1, 0, 2, 0, 3};
    n = sizeof(arr2) / sizeof(arr2[0]);
    moveZeroToEnd(arr2, n);
    display(arr2, n);

    int arr3[] = {1, 2, 3, 4, 5};
    n = sizeof(arr3) / sizeof(arr3[0]);
    moveZeroToEnd(arr3, n);
    display(arr3, n);
    
    int arr4[] = {0, 0, 0, 0, 0};
    n = sizeof(arr4) / sizeof(arr4[0]);
    moveZeroToEnd(arr4, n);
    display(arr4, n);     
    
    int arr5[] = {1, 2, 0, 3, 0, 4};
    n = sizeof(arr5) / sizeof(arr5[0]);
    moveZeroToEnd(arr5, n);
    display(arr5, n);
    
    
    return 0;
}