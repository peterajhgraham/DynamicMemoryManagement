#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

typedef struct {
    int *data;
    int size;
    int capacity;
} DynamicArray;

DynamicArray* create_array(int initial_capacity);
void add_element(DynamicArray* arr, int element);
void remove_element(DynamicArray* arr, int index);
int search_element(DynamicArray* arr, int element);
void print_array(DynamicArray* arr);
void free_array(DynamicArray* arr);

#endif
