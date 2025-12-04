//Insert an element in an array at a given position.

#include <stdio.h>
void print_array(int a[],int nn)
{
    for(int i=0;i<nn;i++)
    printf("%d ",a[i]);
}

int main(){
    int n;
    printf("Enter size of array:\n");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter elements:\n");

    for(int i =0;i<n;i++)
        scanf("%d",&arr[i]);
    
    printf("Enter postion and number to insert:");
    int pos,num;
    scanf("%d %d",&pos,&num);
    if(pos<0||pos>(n+1))
    {
        printf("Element can not be inserted there");
        return 1;
    }

    for(int i =n+1;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
    
    print_array(arr,n+1);

    return 0;
}