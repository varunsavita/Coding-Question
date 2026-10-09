/*
    Q0053 — Const Pointer Combinations

    Problem:
    Demonstrate the difference between:

    1. Normal pointer
       int *ptr

    2. Pointer to constant
       const int *ptr

    3. Constant pointer
       int *const ptr

    4. Constant pointer to constant
       const int *const ptr

    Key Concepts:
    
    int *ptr
        Value can change.
        Pointer can change.

    const int *ptr
        Value cannot change through pointer.
        Pointer can change.

    int *const ptr
        Value can change.
        Pointer cannot change.

    const int *const ptr
        Value cannot change.
        Pointer cannot change.
    
    
    The program demonstrates:
    - Whether the value pointed to by the pointer can be modified.
    - Whether the pointer can point to another variable.

    TC1:
    Normal pointer

    Input:
    num1 = 10
    num2 = 20

    Operations:
    - Modify num1 through pointer.
    - Change pointer to num2.

    Expected Output:
    Initial value: 10
    After modifying through pointer: 50
    After changing pointer: 20


    TC2:
    Pointer to constant

    Input:
    num1 = 10
    num2 = 20

    Operations:
    - Read num1.
    - Change pointer to num2.

    Expected Output:
    Initial value: 10
    After changing pointer: 20

    Note:
    The value cannot be modified through the pointer.


    TC3:
    Constant pointer

    Input:
    num1 = 10

    Operation:
    - Modify num1 through pointer.

    Expected Output:
    Initial value: 10
    After modifying through pointer: 50

    Note:
    The pointer cannot point to another variable.


    TC4:
    Constant pointer to constant

    Input:
    num1 = 10

    Operation:
    - Read the value.

    Expected Output:
    Value: 10

    Note:
    Neither the value nor the pointer can be modified.


    Time Complexity: O(1)
    Space Complexity: O(1)
*/

#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 20;

    /*
        TC1: Normal Pointer
        Both the value and pointer can be changed.
    */

    printf("TC1: Normal Pointer\n");

    int *ptr1 = &num1;
    printf("Initial value: %d\n", *ptr1);
    *ptr1 = 50;
    printf("After modifying through pointer: %d\n", *ptr1);
    ptr1 = &num2;
    printf("After changing pointer: %d\n", *ptr1);
    printf("\n");


    /*
        TC2: Pointer to Constant
        The value cannot be modified through ptr2.
        The pointer itself can be changed.
    */

    printf("TC2: Pointer to Constant\n");
    num1 = 10;
    num2 = 20;
    const int *ptr2 = &num1;
    printf("Initial value: %d\n", *ptr2);
    ptr2 = &num2;
    printf("After changing pointer: %d\n", *ptr2);

    /*
        Invalid operation:
        *ptr2 = 100;
        ERROR:
        Cannot modify a const value through ptr2.
    */
    printf("\n");

    /*
        TC3: Constant Pointer
        The value can be modified.
        The pointer itself cannot be changed.
    */

    printf("TC3: Constant Pointer\n");
    num1 = 10;
    num2 = 20;
    int *const ptr3 = &num1;
    printf("Initial value: %d\n", *ptr3);
    *ptr3 = 50;
    printf("After modifying through pointer: %d\n", *ptr3);
    /*
        Invalid operation:
        ptr3 = &num2;
        ERROR:
        ptr3 is a constant pointer.
    */
    printf("\n");


    /*
        TC4: Constant Pointer to Constant
        Neither the value nor the pointer can be changed.
    */

    printf("TC4: Constant Pointer to Constant\n");
    num1 = 10;
    num2 = 20;
    const int *const ptr4 = &num1;
    printf("Value: %d\n", *ptr4);
    /*
        Invalid operations:
        *ptr4 = 100;
        ERROR:
        Cannot modify the value.
        ptr4 = &num2;
        ERROR:
        Cannot modify the pointer.
    */

    printf("\n");

    /*
        Final values
    */

    printf("Final Values:\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}