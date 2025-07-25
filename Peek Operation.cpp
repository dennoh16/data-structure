/*
 * Purpose: Retrieving the value of the top element without removing it.
 * Programmer: Dennis Ndirangu
 * AdmNo: BSE-05-0160/2024
 * Date: June 21, 2025
 */

#include <stdio.h>
#define MAX_SIZE 5

// peek - Returning the value of the top element without removing it.

int peek(int stack[], int top) {
    if (top < 0) {
        printf("Stack underflow: Cannot peek, stack is empty.\n");
        return -1;
    }
    return stack[top];
}

// Entry point to demonstrate peek operation.

int main() {
    int stack[MAX_SIZE] = {10, 20, 30};
    int top = 2; // Stack with 3 elements
    printf("Top element: %d\n", peek(stack, top));
    top = -1;    // Empty stack
    printf("Top element: %d\n", peek(stack, top));
    return 0;
}