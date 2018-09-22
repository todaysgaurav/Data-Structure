/*Write a program to implement directed graph and perform
Depth First Search (DFS)
 Written by -Gaurav Rajput*/	
#include<stdio.h> 
void DFS(int);
int G[10][10],visited[10],n;
 
int main(void)
{
    int i,j;
    printf("Enter number of vertices:");
   
    scanf("%d",&n);
    printf("\nEnter adjecency matrix of the graph:");
   
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            scanf("%d",&G[i][j]);
   for(i=0;i<n;i++)
        visited[i]=0;
 
    DFS(0);
  return 0;
}
 
void DFS(int i)
{
    int j;
    printf("\n%d",i);
    visited[i]=1;
    
    for(j=0;j<n;j++)
       if(!visited[j]&&G[i][j]==1)
            DFS(j);
   print("\n");
}
 
