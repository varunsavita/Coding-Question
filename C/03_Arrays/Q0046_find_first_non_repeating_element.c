/*
    /*
    Q0046 — Find the First Non-Repeating Element

    Problem:
    Given an integer array, find the first element that occurs
    exactly once in the array.

    The array may contain positive numbers, negative numbers, and zero.
    The elements do not need to be sorted.

    TC1:
    Input:  {1, 2, 2, 3, 1, 4, 2}
    Output: 3

    TC2:
    Input:  {1, 1, 1, 1}
    Output: No non-repeating element

    TC3:
    Input:  {1, 2, 3, 4, 5}
    Output: 1

    TC4:
    Input:  {0, 0, 1, 1, 2, 2}
    Output: No non-repeating element

    TC5:
    Input:  {-1, -1, 2, 2, 2, 5}
    Output: 5

    TC6:
    Input:  {-100, 50, -100, 200, 5000, 3000}
    Output: 50

    Approach:
    1. Traverse the array using index i.
    2. For each element, count how many times it occurs
       in the complete array.
    3. If the count is 1, the element is non-repeating.
    4. Since the array is traversed from left to right,
       the first element with count 1 is the first
       non-repeating element.
    5. Print the element and stop searching.
    6. If no element has a count of 1, print that there
       is no non-repeating element.

    Time Complexity: O(n^2)
    Space Complexity: O(1)

*/

#include <stdio.h>
#include <stdbool.h>

void findFirstNonRepeat(int arr[], int arrlen){
  
    for(int i =0; i < arrlen; i++){
        int count = 0;
        for(int j = 0; j < arrlen; j++){
            if(arr[i] == arr[j]){
                count++;
            }      
        }

        
        if(count == 1){
            printf("First non repeating element %d \n", arr[i]);
            return;
        }
    }
    printf("No Non-repeating element \n");
}

int main()

{
    int arr1[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr1)/ sizeof(arr1[0]);
    findFirstNonRepeat(arr1, n);

    int arr2[] = {1, 1, 1, 1};
    n = sizeof(arr2)/ sizeof(arr2[0]);
    findFirstNonRepeat(arr2, n);

    int arr3[] = {1, 2, 3, 4, 5};
    n = sizeof(arr3)/ sizeof(arr3[0]);
    findFirstNonRepeat(arr3, n);

    int arr4[]  = {0, 0, 1, 1, 2, 2};
    n = sizeof(arr4)/ sizeof(arr4[0]);
    findFirstNonRepeat(arr4, n);

    int arr5[] = {-1, -1, 2, 2, 2, 5};
    n = sizeof(arr5)/ sizeof(arr5[0]);
    findFirstNonRepeat(arr5, n);

    int arr6[] = {-100, 50, -100, 200, 5000, 3000};
    n = sizeof(arr6)/ sizeof(arr6[0]);
    findFirstNonRepeat(arr6, n);

    return 0;
}