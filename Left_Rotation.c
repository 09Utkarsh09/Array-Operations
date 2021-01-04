#include<stdio.h>
#include<stdlib.h>


void leftRotateByOne(int arr[], int n)
{
    int first = arr[0];
    int i;
    for (i = 0; i < n - 1; i++){
    	arr[i] = arr[i + 1];
 	}
        
    arr[n-1] = first;
}



void leftRotate(int arr[], int r, int n)
{
    int i;
	for (i = 0; i < r; i++)
        leftRotateByOne(arr, n);
}



int main(){
    int n,d,i;
    scanf("%d%d",&n,&d);
    int *a=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    leftRotate(a, d, n);
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
