/*
 * Purpose: Updating an element at a specified index in an array.
 * Programmer: Dennis Ndirangu
 * AdmNo: BSE-05-0160/2024
 * Date: June 21, 2025
 */

#include <stdio.h>

// update - Replacing the element at the specified index with a new value.
 
void update(int arr[], int size, int index, int value) {
    if (index < 0 || index >= size) {
        printf("Invalid index: Must be between 0 and %d.\n", size - 1);
        return;
    }
    arr[index] = value;
    printf("Updated index %d with value %d.\n", index, value);
}

// Entry point to demonstrate update function.
 
int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    update(arr, size, 2, 10);
    return 0;
}