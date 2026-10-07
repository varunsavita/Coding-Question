/*

    Q0050 — Reverse a String In-Place
    
    Problem
    Given a string, reverse it in-place without using another character array.

    TC1:
    Input:  "hello"
    Output: "olleh"

    TC2:
    Input:  "embedded"
    Output: "deddebme"

    TC3:
    Input:  "C"
    Output: "C"

    TC4:
    Input:  "12345"
    Output: "54321"

    TC5:
    Input:  ""
    Output: ""

   Approach:
    1. Find the length of the string.
    2. Use one index starting from the beginning of the string.
    3. Use another index starting from the end of the string.
    4. Swap the characters at these two positions.
    5. Move the first index forward and the second index backward.
    6. Continue until the middle of the string is reached.
    7. Print the reversed string.

    Time Complexity: O(n)
    Space Complexity: O(1)

*/

#include <stdio.h>
#include <string.h>

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}


void reverseString(char str[])
{
    int len = strlen(str);

    for(int i = 0; i < len / 2; i++)
    {
        swap(&str[i], &str[len - i - 1]);
    }

    for(int i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }

    printf("\n");
}


int main()

{

    char str1[] = "hello";
    reverseString(str1);

    char str2[] = "embedded";
    reverseString(str2);

    char str3[] = "12345";
    reverseString(str3);

    char str4[] = "C";
    reverseString(str4);

    char str5[] = "";
    reverseString(str5);

    return 0;
}