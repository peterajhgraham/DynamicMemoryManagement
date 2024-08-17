#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

DynamicArray* create_array(int initial_capacity) {
    DynamicArray *arr = (DynamicArray *)malloc(sizeof(DynamicArray));
    arr->data = (int *)malloc(initial_capacity * sizeof(int));
    arr->size = 0;
    arr->capacity = initial_capacity;
    return arr;
}

void add_element(DynamicArray* arr, int element) {
    if (arr->size >= arr->capacity) {
        arr->capacity *= 2;
        arr->data = (int *)realloc(arr->data, arr->capacity * sizeof(int));
    }
    arr->data[arr->size++] = element;
}

void remove_element(DynamicArray* arr, int index) {
    if (index < 0 || index >= arr->size) {
        printf("Index out of bounds\n");
        return;
    }
    for (int i = index; i < arr->size - 1; i++) {
        arr->data[i] = arr->data[i + 1];
    }
    arr->size--;
}

int search_element(DynamicArray* arr, int element) {
    for (int i = 0; i < arr->size; i++) {
        if (arr->data[i] == element) {
            return i;
        }
    }
    return -1; // Element not found
}

void print_array(DynamicArray* arr) {
    printf("Array contents: ");
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
}

void free_array(DynamicArray* arr) {
    free(arr->data);
    free(arr);
}
