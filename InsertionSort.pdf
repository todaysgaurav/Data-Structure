/******* Insertion Sort ********/
#include<stdio.h>
void insertionsort(int arr[],int n);
void print(int arr[],int n);

/************* Main Function **************/

int main()
{
    int n;
    printf("Enter number of element in array\n");
    scanf("%d",&n);
    printf("Enter element of array\n");
    int i,arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("You entered  element of array\n");
    print(arr,n);
    insertionsort(arr,n);
    printf("After sorting  element of array\n");
    print(arr,n);
    return 0;
}

/******* insertion sort function********/

void insertionsort(int arr[],int n)
{
    int i,j,temp;
    for( i=1; i<n; i++)
        {
           temp = arr[i];
           j=i-1;
           while( temp<arr[j] && j>=0)
           {
              arr[j+1] = arr[j];
              j--;
           }
           arr[j+1]=temp;
        }
}


/******** Print Function *************/

void print(int arr[],int n)
{
    int i;
    for(i=0; i<n; i++)
    printf("%3d",arr[i]);
    printf("\n\n");
}


/***************************************/
