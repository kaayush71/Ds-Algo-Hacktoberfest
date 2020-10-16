#include <stdio.h>

void swap(int *xp, int *yp)  //swapping the 2 numbers
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted sub array
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[50],n,i;
    printf("Enter the size\n");  //Enter the size
    scanf("%d",&n);
    printf("\n****Enter the array****\n");
    for(i=0;i<n;i++)
    {
        scanf(" %d ",&arr[i]);  //input the unsorted array

    }


    selectionSort(arr, n);  //calling selection sort to sort the array
    printf("Sorted array: \n");
    //printing sorted array
    printArray(arr, n);
    return 0;
}
