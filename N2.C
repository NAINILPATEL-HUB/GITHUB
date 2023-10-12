#include <stdio.h>
#include<conio.h>
void mergeArrays(int arr1[], int size1, int arr2[], int size2, int result[])
 {
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
 {
        if (arr1[i] < arr2[j])
 {
            result[k++] = arr1[i++];
        }
 else
 {
            result[k++] = arr2[j++];
        }
    }

    while (i < size1)
 {
	result[k++] = arr1[i++];
    }

    while (j < size2)
 {
        result[k++] = arr2[j++];
    }
}

void sortArray(int arr[], int size)
int i=0,j=0;
 {
    for (i=0; i < size - 1; i++)
 {
	for (j=0; j < size - i - 1; j++)
 {
            if (arr[j] > arr[j + 1])
 {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
 {
    int size1, size2,i;

    printf("Enter size of the first array: ");
    scanf("%d", &size1);

    printf("Enter size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], result[size1 + size2];

    printf("Enter elements of the first array:\n");
    for ( i = 0; i < size1; i++)
{
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of the second array:\n");
    for (i = 0; i < size2; i++)
 {
        scanf("%d", &arr2[i]);
    }

    sortArray(arr1, size1);
    sortArray(arr2, size2);

    mergeArrays(arr1, size1, arr2, size2, result);

    printf("\nMerged and sorted array:\n");
    for (i = 0; i < size1 + size2; i++)
{
        printf("%d ", result[i]);
    }

    return 0;
}
