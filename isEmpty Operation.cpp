/*
 * Purpose: Checking if the stack is empty.
 * Programmer: Dennis Ndirangu
 * AdmNo: BSE-05-0160/2024
 * Date: June 21, 2025
 */

#include <stdio.h>
#define MAX_SIZE 5

// isEmpty - Checking if the stack is empty.

int isEmpty(int top) {
    return (top < 0) ? 1 : 0;
}

// Entry point to demonstrate isEmpty operation.

int main() {
    int top = -1; // Empty stack
    printf("Is stack empty? %s\n", isEmpty(top) ? "Yes" : "No");
    top = 2;     // Non-empty stack
    printf("Is stack empty? %s\n", isEmpty(top) ? "Yes" : "No");
    return 0;
}