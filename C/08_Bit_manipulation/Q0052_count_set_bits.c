/*

    Q0052 — Count Set Bits in an Integer

    Problem:
    Given an unsigned integer, count the number of set bits (1s)
    in its binary representation.

    The solution uses the bit manipulation technique:
    Key Concept: The operation: num & (num - 1)

    removes the lowest set bit (rightmost 1) from num.

    TC1:
    Input: 0
    Output: 0

    TC2:
    Input: 1
    Output: 1

    TC3:
    Input: 5
    Binary: 0101
    Output: 2

    TC4:
    Input: 15
    Binary: 1111
    Output: 4

    TC5:
    Input: 16
    Binary: 10000
    Output: 1

    TC6:
    Input: 255
    Binary: 11111111
    Output: 8

    Approach:
    1. Initialize a counter to 0.
    2. Check whether num is greater than 0.
    3. Increment the counter for every set bit.
    4. Use num = num & (num - 1) to clear the lowest set bit.
    5. Repeat until all set bits are cleared.
    6. Return the total number of set bits.




    Time Complexity: O(k)
    where k is the number of set bits.

    Space Complexity: O(1)


*/

#include <stdio.h>

int countSetBits(unsigned int num)
{
    int count= 0;
    while(num > 0){
        count++;
        num = num & (num -1);
    }
    return count;
}



int main()
{
    
    unsigned int num = 0;
    int numOfSetCount = 0;
    numOfSetCount = countSetBits (num);
    printf("Count of Set bit in Number %u - %d\n", num, numOfSetCount);

    num = 1;
    numOfSetCount = 0;
    numOfSetCount = countSetBits (num);
    printf("Count of Set bit in Number %u  - %d \n", num, numOfSetCount);

    num = 5;
    numOfSetCount = 0;
    numOfSetCount = countSetBits (num);
    printf("Count of Set bit in Number %u  - %d \n", num, numOfSetCount);

    num = 15;
    numOfSetCount = 0;
    numOfSetCount = countSetBits (num);
    printf("Count of Set bit in Number %u  - %d\n", num, numOfSetCount);

    num = 16;
    numOfSetCount = 0;
    numOfSetCount = countSetBits (num);
    printf("Count of Set bit in Number %u  - %d\n", num, numOfSetCount);

    num = 255;
    numOfSetCount = 0;
    numOfSetCount = countSetBits (num);
    printf("Count of Set bit in Number %u  - %d\n", num, numOfSetCount);

    

    return 0;
}