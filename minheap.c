#include <stdio.h>
#include <stdlib.h>
#define HEAP_SIZE 100
struct MinHeap {
    int *array;
    int capacity;
    int size;
};
struct MinHeap* createHeap(int capacity) {
    struct MinHeap* heap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    heap->capacity = capacity;
    heap->size = 0;
    heap->array = (int*)malloc(capacity * sizeof(int));
    return heap;
}
void swap(int* a, int* b) 
{ int temp = *a;
    *a = *b;
    *b = temp;
}
void minHeapify(struct MinHeap* heap, int index) {
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < heap->size && heap->array[left] < heap->array[smallest])
        smallest = left;
    if (right < heap->size && heap->array[right] < heap->array[smallest])
        smallest = right;
    if (smallest != index) {
        swap(&heap->array[index], &heap->array[smallest]);
        minHeapify(heap, smallest);
    }
}
void insertKey(struct MinHeap* heap, int key) {
    if (heap->size == heap->capacity) {
        printf("Heap is full. Cannot insert more elements.\n");
        return;
    }
    int i = heap->size;
    heap->array[i] = key;
    heap->size++;
    while (i != 0 && heap->array[(i - 1) / 2] > heap->array[i]) {
        swap(&heap->array[i], &heap->array[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}
int extractMin(struct MinHeap* heap) {
    if (heap->size <= 0)
        return -1;

    if (heap->size == 1) {
        heap->size--;
        return heap->array[0];
    }
    int root = heap->array[0];
    heap->array[0] = heap->array[heap->size - 1];
    heap->size--;
    minHeapify(heap, 0);
    return root;
}
int main() {
	int n,i,a[50];
    struct MinHeap* heap = createHeap(HEAP_SIZE);
    printf("enter the no. element you want to insert ");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     insertKey(heap,a[i]);
	}
    printf("Min Heap: %d\n", extractMin(heap));
    return 0;
}

