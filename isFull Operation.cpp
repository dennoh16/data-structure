/*
 * Purpose: Checking if the stack is full.
 * Programmer: Dennis Ndirangu
 * AdmNo: BSE-05-0160/2024
 * Date: June 21, 2025
 */

#include <stdio.h>
#define MAX_SIZE 5

// isFull - Checking if the stack is full.

int isFull(int top, int maxSize) {
    return (top >= maxSize - 1) ? 1 : 0;
}

// Entry point to demonstrate isFull operation.

int main() {
    int top = 4; // Stack with 5 elements (full for MAX_SIZE 5)
    printf("Is stack full? %s\n", isFull(top, MAX_SIZE) ? "Yes" : "No");
    top = 2;     // Not full
    printf("Is stack full? %s\n", isFull(top, MAX_SIZE) ? "Yes" : "No");
    return 0;
}