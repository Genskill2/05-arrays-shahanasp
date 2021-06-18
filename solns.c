#include <stdio.h>
int max(int arr[],int n)
{
    int i,large=0
    for (i = 0; i < n; ++i) {
        if (arr[0]<= arr[i]){
            large=arr[i];
        
        }
        else{
            continue;
        }
    return (large);
}
