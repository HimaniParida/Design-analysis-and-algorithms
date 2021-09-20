//Given an array arr[] of n elements, write a function to search a given element x in arr[].

#include<stdio.h>
int search(int arr[], int n, int x)
{
    int i;
    for(i = 0; i<n; i++)
        if(arr[i] == x)
            return i;
    return -1;
}

int main(void)
{
    int arr[] = {21, 34, 5, 43 , 19};
    int x = 43;
    int n = sizeof(arr) / sizeof(arr[0]);


    int result = search(arr, n, x);
    (result == -1)
        ?printf("Element is not present in the array")
        :printf("Element is present at index %d", result);
    return 0;
}