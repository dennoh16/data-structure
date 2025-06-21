/*
 * Purpose: Implementing the pop operation to remove and return the top element.
 * Programmer: Dennis Ndirangu
 * AdmNo: BSE-05-0160/2024
 * Date: June 21, 2025
 */

#include <stdio.h>
#define MAX_SIZE 5

// pop - Removeing and returning the top element from the stack.
 
int pop(int stack[], int *top) {
    if (*top < 0) {
        printf("Stack underflow: Cannot pop, stack is empty.\n");
        return -1;
    }
    int value = stack[(*top)--];
    printf("Popped %d from the stack.\n", value);
    return value;
}

// Entry point to demonstrate pop operation.
 
int main() {
    int stack[MAX_SIZE] = {10, 20, 30};
    int top = 2; // Stack with 3 elements
    pop(stack, &top);
    printf("Top index after pop: %d\n", top);
    return 0;
}