//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main(){
    int n,m;
    printf("Ente size of array:\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    int arrsum[n];
    printf("Enter the  elements: ");

    for(int i =0;i<n;i++)
    {
        arrsum[i]=0;
        for (int j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
            arrsum[i]+=arr[i][j];
        }
    }

        printf("\nSum of each row:\n");
        for (int i = 0; i < n; i++) 
        printf("Row %d: %d\n", i + 1, arrsum[i]); 
    
    return 0;
}