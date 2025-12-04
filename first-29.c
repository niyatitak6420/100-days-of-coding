//find the second largest element in an array.

#include<stdio.h>
void insertitionsort(int arr[], int n){

    for(int i=1;i<n;i++)
    {
        int key =arr[i];
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
    }
}

int main(){
      int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    insertitionsort(arr, n);

    printf("second largest element: ");
    
        printf("%d ", arr[n-2]);
    return 0;
}