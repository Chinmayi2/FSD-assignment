
//Searching the element in array by sorting//
#include <stdio.h>
int main()
{
    int array[10];
    int i, j, num, element, key;
    int first, mid, last; //variable declaration//

    printf("Enter the size of array:\n");
    scanf("%d", &num);
    printf("Enter the elements: \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }         //writing the array//
    printf("Array Elements: \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }   //printing array elements//

    //Bubble sorting for sorting the array elements //
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < (num - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                element = array[j];
                array[j] = array[j + 1];
                array[j + 1] = element;
            }
        }
    }
    printf("Sorted array Bubble sort: \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);

    }
    printf("Enter the element to be searched \n");
    scanf("%d", &key);

    //Binary searching to search element //
    first = 1;
    last = num;
    do
    {
        mid = (first+last) / 2;
        if (key < array[mid])
           last = mid - 1;
        else if (key > array[mid])
            first = mid + 1;
    } while (key != array[mid] && first <= last);
    if (key == array[mid])
    {
        printf("Element Found \n");
    }
    else
    {
        printf("Element Not present \n");
    }
    return (0);
}