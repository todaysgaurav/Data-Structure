/******* Quick Sort ********/
#include<stdio.h>
void QuickSort(int arr[],int n,int );
void print(int arr[],int n);
int partition(int arr[],int ,int);
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
    QuickSort(arr,0,n-1);
    printf("After sorting  element of array\n");
    print(arr,n);
    return 0;
}

/******* Quick sort function********/

void QuickSort(int arr[],int b,int e)
{
    int loc;
    if(b<e)
    {
       loc=partition(arr,b,e);
      QuickSort(arr, b,loc-1);
      QuickSort(arr, loc+1,e);
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

/******* Partiton Array ***************/

int partition(int arr[],int b, int e)
{
    int l,r,temp,loc,f;
    loc= l= b;
    r=e;
    f=0;
    while(f!=1)
    {
       while(arr[loc]<=arr[r] && (loc!=r))
       r--;
       if(loc==r)
       f=1;
       else if(arr[loc]>arr[r])
       {
           temp=arr[loc];
           arr[loc]=arr[r];
           arr[r]=temp;
           loc=r;
       }
       if(f!=1)
       {
           while(arr[loc] >= arr[l] && loc!=l )
           l++;
           if(loc==l)
           f=1;
           else if(arr[loc] < arr[l])
           {
              temp = arr[loc];
              arr[loc] = arr[l];
              arr[l] = temp;
              loc=l;
           }
       }
    }
   
   return loc;
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
