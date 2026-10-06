/*
    /*
    Q0048 — Find the Intersection of Two Arrays
    
    Problem
    Given two integer arrays, find the elements that are present in both arrays.
    Print each common value only once.

    The array may contain positive numbers, negative numbers, zero, and duplicate values.

    TC1:
    Input:      Array1: {1, 2, 3, 4, 5}
                Array2: {3, 4, 5, 6, 7}
    Output:     3 4 5

    TC2:
    Input:      Array1: {1, 2, 2, 3, 4}
                Array2: {2, 2, 4, 5}
    Output:     2 4

    TC3:
    Input:      Array1: {1, 2, 3}
                Array2: {4, 5, 6}
    Output:     No common element

    TC4:
    Input:      Array1: {-1, 0, 2, 5}
                Array2: {-1, 2, 3, 5}
    Output:     -1 2 5

    TC5:
    Input:      Array1: {1, 1, 1, 2, 3}
                Array2: {1, 2, 2, 2, 4}
    Output:     1 2


    Approach:
    1. Traverse the first array using index i.
    2. Check whether the current element was already processed in arr1.
    3. If it was already processed, skip the element.
    4. Search for the current element in arr2.
    5. If the element is found in arr2, print it.
    6. Continue until all elements of arr1 are processed.
    7. If no common element is found, print "No common element".

    Time Complexity: O(n*m)
    Space Complexity: O(1)

*/

#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void findIntersectionNum(int arr1[], int arr1len, int arr2[], int arr2len){
  
    bool foundIntersectionNum = false;
    for(int i =0; i < arr1len; i++){

        bool alreadyPrinted = false;
        for(int k = 0; k < i; k++)
        {
            if(arr1[i] == arr1[k])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for(int j = 0; j < arr2len; j++){
            if(arr1[i] == arr2[j]){
                foundIntersectionNum = true;
                printf(" %d ", arr1[i]);
                break;
            }      
        }
    }
    if(foundIntersectionNum){
        printf("\n");
    }
    else{
        printf(" No common element \n");
    }
    
}

int main()

{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    findIntersectionNum(arr1, ARRAY_SIZE(arr1), arr2, ARRAY_SIZE(arr2));

    int arr3[] = {1, 2, 2, 3, 4};
    int arr4[] = {2, 2, 4, 5};
    findIntersectionNum(arr3, ARRAY_SIZE(arr3), arr4, ARRAY_SIZE(arr4));

    int arr5[] = {1, 2, 3};
    int arr6[] = {4, 5, 6};
    findIntersectionNum(arr5, ARRAY_SIZE(arr5), arr6, ARRAY_SIZE(arr6));

    int arr7[] = {-1, 0, 2, 5};
    int arr8[] = {-1, 2, 3, 5};
    findIntersectionNum(arr7, ARRAY_SIZE(arr7), arr8, ARRAY_SIZE(arr8));

    int arr9[] = {1, 1, 1, 2, 3};
    int arr10[] = {1, 2, 2, 2, 4};
    findIntersectionNum(arr9, ARRAY_SIZE(arr9), arr10, ARRAY_SIZE(arr10));

    return 0;
}