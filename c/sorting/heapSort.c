#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int i, int n)
{
    int largest = i;
    int right = 2 * i + 1;
    int left = 2 * i;
    if (left <= n && arr[left] > arr[i])
    {
        largest = left;
    }
    if (right <= n && arr[right] > arr[i])
    {
        largest = right;
    }
    
    if (largest != i)
    {
        swap(&arr[largest], &arr[i]);
        heapify(arr, largest, n);
    }
}
void buildHeap(int arr[], int n)
{
    for (int i = n / 2; i >= 1; i--)
    {
        heapify(arr, i, n);
    }
}
void heapSort(int arr[], int n)
{
    buildHeap(arr, n);
    for (int t = n; t >= 2; t--)
    {
        swap(&arr[1], &arr[t]);
        heapify(arr, 1, t - 1);
    }
}
int main()
{
    int arr[] = {-1, -54, 53, 55, 52, 50};
    int n = 5;

    heapSort(arr, n);
    for (int i = 1; i <= n; i++)
    {
        printf(" %d ", arr[i]);
    }
    return 0;
}