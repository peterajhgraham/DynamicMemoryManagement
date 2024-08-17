#include <stdio.h>
#include "dynamic_array.h"

int main() {
    int initial_capacity = 2;
    DynamicArray *arr = create_array(initial_capacity);

    add_element(arr, 10);
    add_element(arr, 20);
    add_element(arr, 30);

    printf("After adding elements:\n");
    print_array(arr);

    remove_element(arr, 1);

    printf("After removing element at index 1:\n");
    print_array(arr);

    int search_result = search_element(arr, 30);
    if (search_result != -1) {
        printf("Element 30 found at index %d\n", search_result);
    } else {
        printf("Element 30 not found\n");
    }

    free_array(arr);
    return 0;
}
