//Search in a sorted array using binary search.

#include <stdio.h>
int main(){
    int n ;
      printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:\n");

    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter element to find:\n");
    int target;
    scanf("%d",&target);


    int i=0,j=n-1;
    while(i<=j)
    {
        int mid = i+(j-i)/2;
        if(arr[mid]<target)
        i=mid+1;
        if(arr[mid]>target)
        j=mid-1;
        else if(arr[mid]==target)
        {
            printf("found at index: %d\n",mid);
            return 0;
        }
    }

    printf("Element not found");
    return 0;
}