/*
    Q0054 — Implement memcpy() Without Using the Standard Library

    Implement a custom function named myMemcpy() that copies
    a specified number of bytes from a source memory block
    to a destination memory block.

    Requirements:
    1. Accept destination pointer, source pointer, and byte count.
    2. Copy data byte by byte using unsigned char pointers.
    3. Do not use the standard library memcpy() function.
    4. Return the original destination pointer.
    5. Do not append a null terminator automatically.
    6. Source and destination memory regions must not overlap.


    TC1:
    Input:
    Source: "Embedded C"
    Number of bytes: sizeof(source)

    Expected Output:
    Destination: Embedded C

    TC2:
    Input:
    Source: "Hello"
    Number of bytes: sizeof(source)

    Expected Output:
    Destination: Hello

    TC3:
    Input:
    Source: 'A'
    Number of bytes: 1

    Expected Output:
    Destination: A

    TC4:
    Input:
    Source: "Hello"
    Destination: "Test"
    Number of bytes: 0

    Expected Output:
    Destination: Test

    Approach:
    1. Convert the destination pointer to unsigned char *.
    2. Convert the source pointer to const unsigned char *.
    3. Iterate from index 0 to n - 1.
    4. Copy each source byte to the corresponding destination byte.
    5. Return the original destination pointer.

    Time Complexity: O(n)
    Space Complexity: O(1)

    Note:
    n represents the number of bytes copied.
    The source and destination must refer to valid memory
    regions of at least n bytes when n > 0.


*/


#include <stdio.h>
#include <stddef.h>

void *myMemcpy(void *dest, const void *src, size_t n)
{
    const unsigned char * ptrSrc  = (const unsigned char *)src;
    unsigned char * ptrDest = (unsigned char *)dest;

    for(int i = 0; i < n; i++){
        ptrDest[i] = ptrSrc[i];
    }

    return dest;
}

int main(void)
{
    char source1[] = "Embedded C";
    char destination1[20] = {0};

    myMemcpy(destination1, source1, sizeof(source1));

    printf("Source: %s\n", source1);
    printf("Destination: %s\n", destination1);

    char source2[] = "Hello";
    char destination2[20] = {0};

    myMemcpy(destination2, source2, sizeof(source2));

    printf("Source: %s\n", source2);
    printf("Destination: %s\n", destination2);


    char source3[] = "A";
    char destination3[20] = {0};

    myMemcpy(destination3, source3, sizeof(source3));

    printf("Source: %s\n", source3);
    printf("Destination: %s\n", destination3);

    char source4[] = "Hello";
    char destination4[20] = "Test";

    myMemcpy(destination4, source4, 0);

    printf("Source: %s\n", source4);
    printf("Destination: %s\n", destination4);
    

    return 0;
}