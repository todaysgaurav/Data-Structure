/******* Merge Sort ********/
#include<stdio.h>
void MergeSort(int arr[],int n,int );
void print(int arr[],int n);
void Merge(int arr[],int ,int, int);
void input(int arr[],int n);
int arr[100];

/************* Main Function **************/

int main()
{
    int n;
    printf("Enter number of element in array\n");
    scanf("%d",&n);
    input(arr,n);
    printf("You entered  element of array\n");
    print(arr,n);
    MergeSort(arr,0,n-1);
    printf("After sorting  element of array\n");
    print(arr,n);
    return 0;
}

/******* Merge sort function********/

void MergeSort(int arr[],int b,int e)
{
    int m;
    if(b<e)
    {
       m=(b+e)/2;
       MergeSort(arr,b,m);
       MergeSort(arr,m+1,e);
       Merge(arr,b,m,e);
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

/******* Merge Array ***************/

void Merge(int arr[],int b, int m, int e)
{
    int i=b,j=m+1,index=b,temp[100],k;
    while(i<=m && j<=e)
    {
       if(arr[i] < arr[j])
       {
          temp[index]=arr[i];
          i++;
       }
       else
       {
          temp[index]=arr[j];
          j++;
       }
       index++;
    }
    if(i>m)
    {
        while(j<=e)
        {
           temp[index]=arr[j];
           j++;index++;
        }
    }
    else
    {
        while(i<=m)
        {
           temp[index] = arr[i];
           i++;
           index++;
        }
    }
    for(k=b;k<index;k++)
    arr[k]=temp[k];
}

/******* Array Input *********/

void input(int arr[],int n)
{
    printf("Enter element of array\n");
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
}

/*************************************/
