/*
    Q0044 — Remove Duplicate Elements from a Sorted Array

    Problem:
    Given a sorted integer array, remove duplicate elements in-place
    so that each element appears only once.

    TC1:    i/p: {1, 1, 2, 2, 3, 4, 4}   o/p: {1, 2, 3, 4}

    TC2:    i/p: {1, 2, 3, 4, 5}         o/p: {1, 2, 3, 4, 5}

    TC3:    i/p: {1, 1, 1, 1, 1}         o/p: {1}

    TC4:    i/p: {1, 2, 2, 3, 3, 3, 4}   o/p: {1, 2, 3, 4}

    TC5:    i/p: {0, 0, 1, 1, 2, 2}      o/p: {0, 1, 2}

    Approach:
    1. Since the array is sorted, duplicate elements are adjacent.
    2. Use 'i' to traverse the complete array.
    3. Use 'index' to track the position of the last unique element.
    4. If arr[i] is different from arr[index], increment 'index'
       and copy arr[i] to arr[index].
    5. Print elements from index 0 to the final 'index'.

    Time Complexity: O(n)
    Space Complexity: O(1)
*/

#include <stdio.h>


void removeDuplicateNo(int arr[], int arrlen){
    int index = 0;

    for(int i =1; i < arrlen; i++){
        if(arr[i] != arr[index]){
            index++;
            arr[index] = arr[i];
        }

    }

    for(int i =0; i <= index; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()

{
    int arr1[] = {1, 1, 2, 2, 3, 4, 4};
    int n = sizeof(arr1)/ sizeof(arr1[0]);
    removeDuplicateNo(arr1, n);

    int arr2[] = {1, 2, 3, 4, 5};
    n = sizeof(arr2)/ sizeof(arr2[0]);
    removeDuplicateNo(arr2, n);

    int arr3[] = {1, 1, 1, 1, 1};
    n = sizeof(arr3)/ sizeof(arr3[0]);
    removeDuplicateNo(arr3, n);

    int arr4[]  = {1, 2, 2, 3, 3, 3, 4};
    n = sizeof(arr4)/ sizeof(arr4[0]);
    removeDuplicateNo(arr4, n);

    int arr5[] = {0, 0, 1, 1, 2, 2};
    n = sizeof(arr5)/ sizeof(arr5[0]);
    removeDuplicateNo(arr5, n);

    return 0;
}
