//
// Created by Ali Rahbar on 2025-01-17.
//

#include <printf.h>

// Structure for the heap
struct heapNode
{
    int value;
    int priority;
};


struct heap
{
    struct heapNode *arr;
    int size;
    int capacity;
};

// Prototypes for the functions in heap.c
void enqueue(struct heap curr_heap, int value, int priority);
int dequeue(struct heap curr_heap);
int peek(struct heap curr_heap);
int is_empty(struct heap curr_heap);
int size(struct heap curr_heap);

// Functions for the Hepa Node
struct heapNode create_heap_node(int value, int priority);
int get_value(struct heapNode node);
int get_priority(struct heapNode node);

// Main function
int main()
{
    printf("Hello, World!\n");
    return 0;
}

// Implementation of the heap functions

void heapify(struct heap curr_heap)
{
    return;
}


/**
 * Function to enqueue an element in the heap
 * @param curr_heap the heap
 * @param value value we want to insert
 * @param priority priority of the value
 */
void enqueue(struct heap curr_heap, int value, int priority)
{
    // Check if the heap is full
    if (size(curr_heap) == curr_heap.capacity)
    {
        printf("Heap is full\n");
        return;
    }

    // create the heap node
    struct heapNode node = create_heap_node(value, priority);

    // Insert the element at the end of the heap
    curr_heap.arr[size(curr_heap)] = node;
    curr_heap.size++;

    // Heapify the heap
    heapify(curr_heap);
}

/**
 * Function to dequeue the max element in the heap
 * @param curr_heap the heap
 * @return the max element in the heap
 */
int dequeue(struct heap curr_heap)
{
    // Check if the heap is empty
    if (is_empty(curr_heap))
    {
        printf("Heap is empty\n");
        return -1;
    }

    // Get the max element and extract the value
    struct heapNode max = curr_heap.arr[0];
    int value = get_value(max);

    // Move the last element to the root
    curr_heap.arr[0] = curr_heap.arr[size(curr_heap) - 1];
    curr_heap.size--;

    // Heapify the heap
    heapify(curr_heap);

    // Return the max element
    return value;
}


/**
 * Function to fetch the max element in the heap
 * @param curr_heap the heap
 * @return teh maximum in the heap.
 */
int peek(struct heap curr_heap)
{
    if (is_empty(curr_heap))
    {
        printf("Heap is empty\n");
        return -1;
    }
    return get_value(curr_heap.arr[0]);
}

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

/***********************************************
 * Functions for the heap node
 */

struct heapNode create_heap_node(int value, int priority)
{
    struct heapNode node;
    node.value = value;
    node.priority = priority;
    return node;
}

/**
 * Function to get a value from a heap node
 * @param node
 * @return
 */
int get_value(struct heapNode node)
{
    return node.value;
}

/**
 * Function to get the priority of a heap node
 * @param node
 * @return
 */
int get_priority(struct heapNode node)
{
    return node.priority;
}