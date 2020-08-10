#include<stdio.h>

#define size_array 100

int main()
{
    int lower_bound, upper_bound, search_key, n, mid, i, A[size_array], flag = 0;
    lower_bound = 0;
    upper_bound = -1;
    printf("\nEnter the number of elements to be inserted in array : ");
    scanf("%d", &n);
    if(n <= size_array)
        upper_bound = n - 1;
    else
        return 0;
    printf("\nEnter the elements in Array in sorted order : ");
    for( i = 0; i < n; i ++)
    {
        printf("\n%d. element ",(i + 1));
        scanf("%d",&A[i]);
    }
    printf("\nEnter the element to search : ");
    scanf("%d", &search_key);
    while(lower_bound <= upper_bound)
    {
        mid = ((upper_bound - lower_bound)/2 + lower_bound);
        
        if(A[mid] == search_key)
        {
            printf("\nThe search_key %d is at location %d ", search_key, mid + 1);
            flag = 1;
            break;
        }
        else if(A[mid] < search_key)
        {
            lower_bound = mid + 1;
        }
        else
        {
            upper_bound = mid - 1;
        }
        
    }
    if(flag == 0)
    {
        printf("\nSearch_key is not present in array!");
    }
    return 0;
}

/*
output:
Enter the number of elements to be inserted in array : 4

Enter the elements in Array in sorted order : 
1. element 1

2. element 2

3. element 3

4. element 4

Enter the element to search : 3
*/