/* Enter your solutions in this file */
#include <stdio.h>
#include <stdio.h>
int max(int arr[],int n)
{
    for (i = 1; i < n; ++i) {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }

    return (arr[0]);
}
