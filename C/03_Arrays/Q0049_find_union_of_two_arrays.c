/*

    Q0049 — Find the Union of Two Arrays
    
    Problem:
    Given two integer arrays, find all elements that are present in either array.
    Print each value only once.

    The arrays may contain positive numbers, negative numbers, zero,
    and duplicate values.

    TC1:
    Array1 = {1, 2, 3, 4, 5}
    Array2 = {3, 4, 5, 6, 7}
    Output: 1 2 3 4 5 6 7

    TC2:
    Array1 = {1, 2, 2, 3, 4}
    Array2 = {2, 2, 4, 5}
    Output: 1 2 3 4 5

    TC3:
    Array1 = {1, 2, 3}
    Array2 = {4, 5, 6}
    Output: 1 2 3 4 5 6

    TC4:
    Array1 = {-1, 0, 2, 5}
    Array2 = {-1, 2, 3, 5}
    Output: -1 0 2 5 3

    TC5:
    Array1 = {1, 1, 1, 2, 3}
    Array2 = {1, 2, 2, 2, 4}
    Output: 1 2 3 4

   Approach:
    1. Traverse the first array using index i.
    2. Check whether the current element already appeared earlier in arr1.
    3. If it already appeared, skip the element.
    4. Otherwise, print the element.
    5. Traverse the second array using index i.
    6. Check whether the current element already exists in arr1.
    7. If it exists in arr1, skip it because it was already printed.
    8. Check whether the current element already appeared earlier in arr2.
    9. If it already appeared, skip the element.
    10. Otherwise, print the element.

    Time Complexity: O(n * m + n² + m²)
    Space Complexity: O(1)

*/

#include <stdio.h>
#include <stdbool.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

void findUnion(int arr1[], int arr1len, int arr2[], int arr2len){
   
   
    for(int i =0; i < arr1len; i++){
        bool alreadyPrinted = false;

        for(int j = 0; j < i; j++){

            if(arr1[i] == arr1[j])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted == false){
            printf("%d ", arr1[i]);
        }

    }

    for(int i =0; i < arr2len; i++){
        bool alreadyPrinted = false;

        for(int j = 0; j < arr1len; j++){

            if(arr2[i] == arr1[j])
            {
                alreadyPrinted = true;
                break;
            }
        }

        for(int k = 0; k < i; k++){

            if(arr2[k] == arr2[i])
            {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted == false){
            printf("%d ", arr2[i]);
        }

    }

    printf("\n");
    
}

int main()

{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    findUnion(arr1, ARRAY_SIZE(arr1), arr2, ARRAY_SIZE(arr2));

    int arr3[] = {1, 2, 2, 3, 4};
    int arr4[] = {2, 2, 4, 5};
    findUnion(arr3, ARRAY_SIZE(arr3), arr4, ARRAY_SIZE(arr4));

    int arr5[] = {1, 2, 3};
    int arr6[] = {4, 5, 6};
    findUnion(arr5, ARRAY_SIZE(arr5), arr6, ARRAY_SIZE(arr6));

    int arr7[] = {-1, 0, 2, 5};
    int arr8[] = {-1, 2, 3, 5};
    findUnion(arr7, ARRAY_SIZE(arr7), arr8, ARRAY_SIZE(arr8));

    int arr9[] = {1, 1, 1, 2, 3};
    int arr10[] = {1, 2, 2, 2, 4};
    findUnion(arr9, ARRAY_SIZE(arr9), arr10, ARRAY_SIZE(arr10));

    return 0;
}