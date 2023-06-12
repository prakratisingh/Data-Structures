#include <bits/stdc++.h>
using namespace std;
struct Heap
{
    /* data */
    int *array;
    int count;
    int capacity;
    int heap_type;
};
struct Heap *CreateHeap(int capacity, int heap_type)
{
    struct Heap *h = (struct Heap *)malloc(sizeof(struct Heap));
    if (h == NULL)
    {
        cout << "Memory error" << endl;
        return NULL;
    }
    h->heap_type = heap_type;
    h->capacity = capacity;
    h->count = 0;
    h->array = (int *)malloc(sizeof(int) * h->capacity);
    if (h->array == NULL)
    {
        cout << "Memory error";
        return NULL;
    }
    return h;
}
int Parent(struct Heap *h, int i)
{
    if (i <= 0 || i > h->count)
        return -1;
    return i - 1 / 2;
}
int LeftChild(struct Heap *h, int i)
{
    int left = 2 * i + 1;
    if (left > h->count)
        return -1;
    return left;
}
int RightChild(struct Heap *h, int i)
{
    int right = 2 * i + 2;
    if (right > h->count)
        return -1;
    return right;
}
int GetMax(Heap *h)
{
    if (h->count == 0)
        return -1;
    return h->array[0];
}
void PercolateDown(struct Heap *h, int i)
{
    int l, r, max, temp;
    l = LeftChild(h, i);
    r = RightChild(h, i);

    // checking for max value and edge cases(for left)
    if (l != -1 && h->array[l] > h->array[i])
        max = l;
    else
        max = i;
    // checking for max value and edge cases(for right)
    if (r != -1 && h->array[r] > h->array[i])
        max = r;
    if (max != i)
    {
        temp = h->array[i];
        h->array[i] = h->array[max];
        h->array[max] = temp;
    }
    PercolateDown(h, max);
}
// deleting an element (max element)
int DeleteMax(struct Heap *h)
{
    int data;
    if (h->count == 0)
        return -1;
    data = h->array[0];
    h->array[0] = h->array[h->count - 1];
    h->count--; // reducing heap size
    PercolateDown(h, 0);
    return data;
}
// resizing heap to insert new elements
void ResizeHeap(struct Heap *h)
{
    int *array_old = h->array;
    h->array = (int *)malloc(sizeof(int) * h->capacity * 2);
    if (h->array == NULL)
    {
        cout << "Memory error";
    }
    for (int i = 0; i < h->capacity * 2; i++)
    {
        h->array[i] = array_old[i];
        h->capacity *= 2;
        free(array_old);
    }
}

// to insert an element in the heap
int Insert(struct Heap *h, int data)
{
    int i;
    if (h->count == h->capacity)
    {
        ResizeHeap(h);
    }
    h->count++;
    i = h->count - 1;
    while (i >= 0 && data > h->array[(i - 1) / 2])
    {
        h->array[i] = h->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    h->array[i] = data;
}
int main()
{
    struct Heap *h = CreateHeap(10, 1);
    Insert(h, 17);
    Insert(h, 13);
    Insert(h, 6);
    Insert(h, 1);
    Insert(h, 2);
    Insert(h, 4);
    Insert(h, 5);
    for (int i = 0; i < h->capacity; i++)
    {
        cout << h->array[i] << endl;
    }
    cout<<GetMax(h)<<endl;
    cout<<DeleteMax(h)<<endl;
    PercolateDown(h,0);
    for (int i = 0; i < h->capacity; i++)
    {
        cout << h->array[i] << endl;
    }
}