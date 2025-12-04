/*WAP to take a sorted array arr[] and an integer x as input , find the index (0-based ) of the 
 smallest element in arr[] that is greater than or equal to x amd print it. This element is called
 the ceil of x. If such an elment does not exist ,print -1.
 note: in case of multiple occurrences of ceil of x , return the index of the first occurrence. 

*/


#include <stdio.h>
int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int result = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            result = mid;     
            high = mid - 1;   
        } else {
            low = mid + 1;
        }
    }
    printf("%d\n", result);

    return 0;
}