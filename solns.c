/* Enter your solutions in this file */
#include <stdio.h>
int max(int arr[],int n)
{
    for (i = 1; i < n; ++i) {
        if (arr[0]<= arr[i]){
            large=arr[i];
        
        }
        else{
            continue;
        }
    }
    large=arr[0];

    return (large);
}

