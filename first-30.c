//Read and print a matrix.

#include <stdio.h>
int main(){
    int n,m;
    printf("Ente size of array:\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    printf("Enter the elements:\n");

    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Elements are:\n");
    for(int i =0;i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}