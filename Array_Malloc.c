#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Enter no. of elements : ");
    int count, sum = 0, i;
    scanf("%d",&count);

    int *arr = (int*)malloc(sizeof(int)*count);
    
    for(i = 0; i < count; i++)
    {
        arr[i] = i;
        sum += arr[i];
    }
    printf("Array sum : %d",sum);
    return 0;
}

/*
output:
Enter no. of elements : 4
Array sum : 6
*/