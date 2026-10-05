/*
    Q0045 — Find Frequency of Each Element

    Problem:
    Given an integer array, find the frequency of each unique element.

    The array may contain positive numbers, negative numbers, and zero.
    The elements do not need to be sorted.

    TC1:
    Input:  {1, 2, 2, 3, 1, 4, 2}
    Output: 1 -> 2
            2 -> 3
            3 -> 1
            4 -> 1

    TC2:
    Input:  {1, 1, 1, 1}
    Output: 1 -> 4

    TC3:
    Input:  {1, 2, 3, 4, 5}
    Output: 1 -> 1
            2 -> 1
            3 -> 1
            4 -> 1
            5 -> 1

    TC4:
    Input:  {0, 0, 1, 1, 2, 2}
    Output: 0 -> 2
            1 -> 2
            2 -> 2

    TC5:
    Input:  {-1, -1, 2, 2, 2, 5}
    Output: -1 -> 2
            2  -> 3
            5  -> 1

    TC6:
    Input:  {-100, 50, -100, 200, 5000, 3000};
    Output: -100 -> 2
            50   -> 1
            200  -> 1
            5000 -> 1
            3000 -> 1

    Approach:
    1. Traverse the array using index i.
    2. For each element, check the previous elements to determine
    whether it has already been processed.
    3. If the element was already processed, skip it.
    4. Otherwise, traverse from the current position to the end
    and count its occurrences.
    5. Print the element and its frequency.


    Time Complexity: O(n^2)
    Space Complexity: O(1)
*/

#include <stdio.h>
#include <stdbool.h>

void findFrequency(int arr[], int arrlen){
    
    for(int i =0; i < arrlen; i++){
        bool foundElement = false;
        int elementCount = 0;

        for(int j = 0; j < i; j++){
            if(arr[i] == arr[j]){
                foundElement = true;
                break;
            }      
        }
        if(foundElement ==false){

            for(int k=i; k <arrlen; k++){

                if(arr[i] == arr[k])
                    elementCount ++;
            }
            printf("%d -> %d \n", arr[i], elementCount);
        }

        

    }

    printf("-----\n");
}

int main()

{
    int arr1[] = {1, 2, 2, 3, 1, 4, 2};
    int n = sizeof(arr1)/ sizeof(arr1[0]);
    findFrequency(arr1, n);

    int arr2[] = {1, 1, 1, 1};
    n = sizeof(arr2)/ sizeof(arr2[0]);
    findFrequency(arr2, n);

    int arr3[] = {1, 2, 3, 4, 5};
    n = sizeof(arr3)/ sizeof(arr3[0]);
    findFrequency(arr3, n);

    int arr4[]  = {0, 0, 1, 1, 2, 2};
    n = sizeof(arr4)/ sizeof(arr4[0]);
    findFrequency(arr4, n);

    int arr5[] = {-1, -1, 2, 2, 2, 5};
    n = sizeof(arr5)/ sizeof(arr5[0]);
    findFrequency(arr5, n);

    
    int arr6[] = {-100, 50, -100, 200, 5000, 3000};
    n = sizeof(arr6)/ sizeof(arr6[0]);
    findFrequency(arr6, n);

    return 0;
}