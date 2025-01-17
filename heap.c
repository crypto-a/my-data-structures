//
// Created by Ali Rahbar on 2025-01-17.
//

#include <printf.h>

// Structure for the heap
struct heap
{
    int *arr;
    int size;
    int capacity;
};

struct heapNode
{
    int value;
    int priority;
};

// Prototypes for the functions in heap.c
void enqueue(struct heap curr_heap, int value, int priority);
int dequeue(struct heap curr_heap);
int peek(struct heap curr_heap);
int is_empty(struct heap curr_heap);
int size(struct heap curr_heap);

// Main function
int main()
{
    printf("Hello, World!\n");
    return 0;
}

// Implementation of the heap functions

/**
 * Function to check of the current heap is empty or not;
 * @param curr_heap
 * @return boolean value of weather the heap is empty of not
 */
int is_empty(struct heap curr_heap)
{
    return size(curr_heap) == 0;
}

/**
 * Function to get the size of the heap
 * @param curr_heap the heap
 * @return size of the heap
 */
int size(struct heap curr_heap)
{
    return curr_heap.size;
}
