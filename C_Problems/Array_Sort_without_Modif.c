/* Print the Values in Sorted order without Modifying or Copying array.
 */

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void rsort(int arr[], int sorted_index[], int currentindex, int n)
{
    if (currentindex == n) 
        return;
    
    int min = INT_MAX;
    int min_index = -1;
    for (int i = 0; i < n; i++)         //Find a current minimum element in entire array which is not yet printed.
    {
        if (arr[i] < min)
        {
            bool flag = false;
            for (int j = 0; j < currentindex; j++)      //Check if the minimum array element index is already present in the 'sorted_index' array.
            {
                if (i == sorted_index[j])
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)      //If index is not already added in the 'sorted_index' array, it is a new minimum and its index should be updated in the 'sorted_index'.
            {
                min = arr[i];
                min_index = i;
            }
        }
    }
    sorted_index[currentindex] = min_index;     //Store current minimum element's index.
    printf ("%d ", min);                        //Print the current minimum element.
    return (rsort(arr, sorted_index, currentindex+1, n));       //Tail Recursion: Recursive function call in return.
}

int main()
{
    int n;
    printf ("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n], sorted_index[n];
    printf ("Enter the array elements: ");
    for (int i = 0; i < n; i++)         //Array Input.
    {
        int tmp;
        scanf("%d", &tmp);
        arr[i] = tmp;
    }

    printf ("Sorted Array   -> ");
    rsort(arr, sorted_index, 0, n);     //Function call.
    printf ("\n");

    printf("Original Array -> ");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
