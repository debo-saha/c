#include <stdio.h>

void merge(int arr[], int mid,int low, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int brr[high + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            brr[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            brr[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        brr[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        brr[k] = arr[j];
        k++;
        j++;
    }
    for (int l = low; l <= high; l++)
    {
        arr[l] = brr[l];
    }
}

void mergeSort(int arr[], int low, int high)
{

    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, mid, low, high);
    }
}

int main()
{

    int arr[] = {5, 8, 9, 8, 9, 6, 3, 2};
    int size = 8;
    int i = 0;
    int j = size - 1;
    mergeSort(arr, i, j);
    for (int ii = 0; ii < size; ii++)
    {
        printf(" %d ", arr[ii]);
    }

    return 0;
}