/*
Write a program to take an integer array arr and an integer k as inputs. Print the 
maximum sum of all the subarrays of size k.
*/

#include <stdio.h>
#include <limits.h>
void maxsum(int arr[],int n,int k){
    int maxsum= INT_MIN;
    for(int i=0;i<=n-k;i++){
        int currentsum=0;
        for(int j=0;j<k;j++)
        {
            currentsum+=arr[j+i];
        }
        if(currentsum>maxsum)
        maxsum=currentsum;
    }

    printf("Max sum of subarray of size %d is %d ",k,maxsum);
}

int main(){
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter size of subarray K:\n");
    scanf("%d",&k);

    maxsum(arr,n,k);
    return 0;
}


            

    