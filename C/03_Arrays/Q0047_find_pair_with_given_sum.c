/*
    /*
    Q0047 — Find Pairs with a Given Sum

    Problem:
    Given an integer array and a target sum, find all pairs of
    elements whose sum is equal to the target.

    The array may contain positive numbers, negative numbers,
    zero, and duplicate values.

    TC1:
    Input:  {2, 7, 11, 15}, Target = 9
    Output: (2, 7)

    TC2:
    Input:  {1, 5, 3, 7, 2}, Target = 8
    Output: (1, 7), (3, 5)

    TC3:
    Input:  {2, 2, 4, 6, 8}, Target = 6
    Output: (2, 4)

    TC4:
    Input:  {-3, 5, 1, 2, -1}, Target = 2
    Output: (-3, 5)

    TC5:
    Input:  {1, 2, 3, 4}, Target = 20
    Output: No pair found

    TC6:
    Input: {-5, -2, 0, 2, 5}, Target = 0
    Output: (-5, 5), (-2, 2)

    Approach:
    1. Traverse the array using index i.
    2. For each element, compare it with every element after it
       using index j.
    3. If arr[i] + arr[j] equals the target, print the pair.
    4. Use j = i + 1 to avoid comparing an element with itself
       and avoid checking the same pair twice.
    5. If no pair is found, print "No pair found".

    Time Complexity: O(n^2)
    Space Complexity: O(1)

*/

#include <stdio.h>
#include <stdbool.h>

void findPairsWithSum(int arr[], int arrlen, int target){
  
    bool foundPair = false;
    for(int i =0; i < arrlen; i++){
        for(int j = i+1; j < arrlen; j++){
            if(arr[i] + arr[j] == target){
                foundPair = true;
                printf("( %d , %d )", arr[i], arr[j]);
            }      
        }
    }
    if(foundPair){
        printf("\n");
    }
    else{
        printf("No pair found \n");
    }
    
}

int main()

{
    int arr1[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr1)/ sizeof(arr1[0]);
    findPairsWithSum(arr1, n, target);

    int arr2[] = {1, 5, 3, 7, 2};
    target = 8;
    n = sizeof(arr2)/ sizeof(arr2[0]);
    findPairsWithSum(arr2, n, target);

    int arr3[] = {2, 2, 4, 6, 8};
    target = 6;
    n = sizeof(arr3)/ sizeof(arr3[0]);
    findPairsWithSum(arr3, n, target);

    int arr4[]  = {-3, 5, 1, 2, -1};
    target = 2;
    n = sizeof(arr4)/ sizeof(arr4[0]);
    findPairsWithSum(arr4, n, target);

    int arr5[] = {1, 2, 3, 4};
    target = 20;
    n = sizeof(arr5)/ sizeof(arr5[0]);
    findPairsWithSum(arr5, n, target);

    int arr6[] = {-5, -2, 0, 2, 5};
    target = 0;
    n = sizeof(arr6)/ sizeof(arr6[0]);
    findPairsWithSum(arr6, n, target);

    return 0;
}