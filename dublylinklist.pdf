#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
    
};
struct node *creat(struct node *start)
{
   struct node *new_node,*ptr;
   int num;
   printf("Enter -1 to exit\n");
   printf("Enter the Data\n");
   scanf("%d",&num);
   while(num!=-1)
   {
      if(start==NULL)
      {
         new_node=(struct node*)malloc(sizeof(struct node));
         new_node->prev = NULL;
         new_node->data = num;
         new_node->next = NULL;
         start = new_node;
      }
      else
      {
         ptr = start;
         new_node=(struct node*)malloc(sizeof(struct node));
         new_node->data=num;
         while(ptr->next!=NULL)
         { 
            ptr = ptr->next;
         }
         ptr->next = new_node;
         new_node->prev = ptr;
         new_node->next =NULL;
      }
     // printf("Enter the Data\n");
      scanf("%d",&num);
     
   }
   return start;
}

struct node *display(struct node *start)
{
   struct node *ptr;
   ptr=start;
   while(ptr!=NULL)
   {
      printf("%d  ",ptr->data);
      ptr = ptr->next;
   }
   return start;
}

struct node *insert_beg(struct node *start)
{
   struct node *new_node;
   int num;
   printf("Enter the Data insert beginning in the list\n");
   scanf("%d",&num);
   new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data=num;
   start->prev = new_node;
   new_node->next = start;
   new_node->prev = NULL;
   start = new_node;
   return start;
}

struct node *insert_end(struct node *start)
{
   struct node *ptr, *new_node;
   int num;
   printf("Enter the Data insert end in the list\n");
   scanf("%d",&num);
   new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data=num;
   ptr = start;
         while(ptr->next!=NULL)
         { 
            ptr = ptr->next;
         }
         ptr->next = new_node;
         new_node->prev = ptr;
         new_node->next =NULL;
         return start;
}

struct node *insert_before(struct node *start)
{
   struct node *ptr, *new_node;
   int num,val;
   printf("Enter the Data insert beginning in the given data\n");
   scanf("%d",&num);
   printf("Enter the value before which the data has to be inserted\n");
   scanf("%d",&val);
   new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data=num;
   ptr = start;
   while(ptr->data!=val)
       ptr = ptr->next;
   new_node->next = ptr;
   new_node->prev = ptr->prev;
   ptr->prev->next = new_node;
   ptr->prev = new_node;
   return start;
}

struct node *insert_after(struct node *start)
{
   struct node *ptr, *new_node;
   int num,val;
   printf("Enter the Data insert after in the given data\n");
   scanf("%d",&num);
   printf("Enter the value after which the data has to be inserted\n");
   scanf("%d",&val);
   new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data=num;
   ptr = start;
   while(ptr->data!=val)
       ptr = ptr->next;
   new_node->prev = ptr;
   new_node->next = ptr->next;
   ptr->next->prev = new_node;
   ptr->next = new_node;
   return start;
}

struct node *delete_beg(struct node *start)
{
   struct node *ptr;
   ptr = start;
   start=start->next;
   start->prev=NULL;
   free(ptr);
   return start;
}

struct node *delete_end(struct node *start)
{ 
    struct node *ptr;
    ptr = start;
    while(ptr->next!=NULL)
       ptr = ptr->next;
    ptr->prev->next = NULL;
    return start;
}

struct node *delete_before(struct node *start)
{
    struct node *ptr,*temp;
    int val;
    printf("Enter the value before which the data has to be deleted\n");
    scanf("%d",&val);
    ptr = start;
    while(ptr->data!=val)
    { 
       ptr = ptr->next;
    }
    temp = ptr->prev;
    if(temp==start)
        start = delete_beg(start);
    else
    {
        ptr->prev = temp->prev;
        temp->prev->next = ptr;
    }
    free(temp);
    return start;
}


struct node *delete_after(struct node *start)
{
    struct node *ptr,*temp;
    int val;
    printf("Enter the value after which the data has to be deleted\n");
    scanf("%d",&val);
    ptr = start;
    while(ptr->data!=val)
    { 
       ptr = ptr->next;
    }
    ptr->next = temp->next;
    temp->next->prev = ptr;
    free(temp);
    return start;
}

struct node *delete_list(struct node *start)
{
    while(start!= NULL)
        start = delete_beg(start);
    return start;
}

struct node *start = NULL;

int main()
{
   start = creat(start);
   start = display(start);
   printf("\n");
   start = insert_beg(start);
   start = display(start);
   printf("\n");
   start = insert_end(start);
   start = display(start);
   printf("\n");
   //start = insert_after(start);
   //start = display(start);
   //printf("\n");
   start = delete_beg(start);
   start = display(start);
   printf("\n");
   start = delete_end(start);
   start = display(start);
   printf("\n");
   start = delete_before(start);
   start = display(start);
   //printf("\n");
   //start =  delete_after(start);
   //start = display(start);
   printf("\n");
   start = delete_list(start);
   start = display(start);
   printf("\n");
    return 0;
}
