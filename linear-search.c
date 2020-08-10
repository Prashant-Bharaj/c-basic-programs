
#include<stdio.h>

int main()
{
    //declaration of array
    int Element[10], search_key, index, flag = 0;
    printf("Enter the element of array :- \n");
    for(index = 0; index < 10 ; index++)
    {
        printf("\n%d. element = ",(index+1));
        scanf("%d", &Element[index]);                   //intialization of array
    }
    // linear search
    printf("\nEnter the element to locate in an array : ");
    scanf("%d",&search_key);
    for(index = 0; index < 10; index ++)
    {
        if(search_key == Element[index]) //checking element is present in array or not
        {
            printf("\nElement %d is present in index %d ",search_key, index);
            flag = 1;
        }
    }
    if(flag == 0)
    {
        printf("\n!!!Element is not present in array!!!");
    }
    return 0;
}

/*
Enter the element of array :- 

1. element = 1

2. element = 2

3. element = 3

4. element = 4

5. element = 5

6. element = 6

7. element = 7

8. element = 8

9. element = 9

10. element = 10

Enter the element to locate in an array : 9
*/