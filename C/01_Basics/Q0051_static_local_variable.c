/*

    Q0051 — Static Local Variable
    
    Problem:
    Create a counterStatiction that maintains a counter between counterStatiction calls using a local static variable.

    TC1:
    Call counterStatic() 5 times.
    Output: 1 2 3 4 5

    TC2:
    Call counterNonStatic() 5 times.
    Output: 1 1 1 1 1

    Approach:
    1. Declare a local static variable inside counterStatic().
    2. Initialize it to 0.
    3. Increment the variable every time counterStatic() is called.
    4. Print the current value.
    5. Because the variable is static, its value is preserved between calls.
    6. Compare the behavior with a normal local variable in counterNonStatic().
    7. A normal local variable is initialized again on every function call.

    Time Complexity: O(1) per counterStatiction call
    Space Complexity: O(1)

*/

#include <stdio.h>

void counterStatic(){
    static int count = 0;
    count++;
    printf("%d ", count);
}

void counterNonStatic()
{
    int count = 0;
    count++;
    printf("%d ", count);
}


int main()
{
    printf("With static:\n");
    counterStatic();
    counterStatic();
    counterStatic();
    counterStatic();
    counterStatic();

    printf("\n\nWithout static:\n");

    counterNonStatic();
    counterNonStatic();
    counterNonStatic();
    counterNonStatic();
    counterNonStatic();

    return 0;
}