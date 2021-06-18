#include <stdio.h>
int max(int arr[],int n)
{
    int i,large=0;
    large=arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i]>=large){
            large=arr[i];
        }
        else{
            continue;
        }
    }
    return (large);
}

int min(int arr[],int n)
{
    int i,small=0;
    small=arr[0];
    for (i = 0; i < n; i++) {
        if (arr[i]<=large){
            small=arr[i];
        }
        else{
            continue;
        }
    }
    return (small);
}

