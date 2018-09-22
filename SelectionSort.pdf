/******* Seletion Sort ********/
#include<stdio.h>
void SeletionSort(int arr[],int n);
void print(int arr[],int n);
int smallest(int arr[], int k,int n);
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
    SeletionSort(arr,n);
    printf("After sorting  element of array\n");
    print(arr,n);
    return 0;
}

/******* Seletion sort function********/

void SeletionSort(int arr[],int n)
{
    int i,pos,temp;
    for( i=0; i<n; i++)
        {
           pos = smallest(arr,i,n);
           temp = arr[i];
           arr[i] = arr[pos];
           arr[pos] = temp;
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

/******* Find Smallest ***************/

int smallest(int arr[],int k, int n)
{
    int pos = k , small= arr[k],i;
    for(i=k+1;i<n;i++)
    {
       if(arr[i]<small)
       {
          small = arr[i];
          pos = i;
       }
    }
    return pos;
}

void input(int arr[],int n)
{
    printf("Enter element of array\n");
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
}

/*************************************/
