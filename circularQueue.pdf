/*Write a program to implement queue and a circular queue and perform these operations.
● Insertion
● Deletion  This queue is for circular
written by- Gaurav Rajput */
#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int pop();
void push(int);
void display();
int queue[MAX];
int front=-1;
int rear=-1;
int main(void)
 {
  int choice,item;
   do
    {
     printf("\nMain Menu\n");
     printf("1. for insertion element in the Queue\n");
     printf("2. for deletion a element from the Queue\n");
     printf("3 to display the queue\n");
     printf("4 to exit\n");
     printf("Enter your choice\n");
     scanf("%d",&choice);
     switch(choice)
     {
      case 1:
            printf("Enter item to be inserted: ");
            scanf("%d",&item);
            push(item);
            break;
      case 2:
            item=pop();
            printf(" Deleted Element is: %d\n",item);
            break;
      case 3:
             display();
             break;
     }
   }while(choice!=4);
  return 0;
  }
 void push(int a)
  {
   if(rear==MAX-1 && front==0)
    {
     printf("Queueis in the overflow condition\n");
     return;
    }
    if(front ==-1)
     front=0;
    if(rear==MAX-1 && front!=0)
     rear=-1;
    queue[++rear]=a;
  }
 int pop()
  {
   if(front==-1)
   {
    printf("Queue is in underflow condition\n");
    return 0;
   }
   if(front==MAX-1)
    front=0;
  int number=queue[front++];
  return number;
  }
void display()
 {
 int i;
  printf("Element of Queue are : ");
  if(front<rear)
  for(i=front;i<=rear;i++)
   printf("%d ",queue[i]);
  else {for(i=front;i<MAX-1;i++)
     printf("%d ",queue[i]);
   for(i=0;i<front;i++)
    printf("%d ",queue[i]);
   }
 }
