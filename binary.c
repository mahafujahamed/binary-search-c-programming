#include <stdio.h>
int binarySearch(int *a, int size, int value)
{
    int i, l = 0, r = size - 1, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == value)
        {
            return mid+1;
        }
        else if (value > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int i, value, size;
    printf("Enter array size:");
    scanf("%d", &size);
    int a[size];
    printf("Enter array elements in ascending order:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter value:");
    scanf("%d", &value);
    int b=binarySearch(a, size, value);
    if(b==-1)
    {
        printf("Value not found");
    }else{
        printf("%d is found at %d index",value,b);
    }
}