/* Program in C to read n number of values in an array. After that, count a total number of duplicate
 elements in that array. Then copy the elements except the duplicate elements of that array into another
 array and display this array in reverse order. */

#include<stdio.h>

int main()
{
    int n;
    printf("Enter number of values to be entered in array : ");
    scanf("%d", &n);
    int initial_array[n];
    int new_array[n];

    // Taking input in first array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &initial_array[i]);
    }

    int count_duplicate = 0;
    // count duplicate elements
    for (int i = 0; i < n; i++)
    {
            for (int j = i+1; j < n; j++)
            {
                if (initial_array[j] == initial_array[i])
                {  
                    count_duplicate++;
                    break;
                }
            }
    }

    int index = 0;
    for (int i=0; i<n; i++)
	{
		// check if the picked element is already entered in new_array
		int j;
		for (j=0; j<i; j++)
		if (initial_array[i] == initial_array[j])
			break;

		// If not inserted then insert
		if (i == j)
		    {
                new_array[index] = initial_array[i]; // inserting unique element in new_array
                index++;
            }
	}

    

    printf("\nNumber of duplicate elements in the array = %d\n", count_duplicate);

    printf("\nNew array in reverse order : ");

    int last_index = n - count_duplicate - 1;
    for (int i = last_index; i >= 0; i--)
    {
        printf("%d ", new_array[i]);
    }

    return 0;
}

