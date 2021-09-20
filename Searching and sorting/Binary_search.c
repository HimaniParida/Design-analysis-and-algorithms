//Given a sorted array arr[] of n elements, write a function to search a given element x in arr[].

#include<stdio.h>
int binarySearch(int arr[], int l, int x, int r)
{
    if ( r>= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] = x)
            return mid ;

        if (arr[mid] > x)
            return binarySearch(arr, l, x, mid -1);

        return binarySearch(arr, r, x, mid +1);
        
    }
    return -1;
}

int main(void)
{
    int arr[] = {2, 14, 56, 32, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d",
                            result);
    return 0;

}