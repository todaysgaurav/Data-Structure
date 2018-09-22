#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start = NULL;
struct node *create_ll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *sort_list(struct node *);

int main(int args, char *avgs[])
{ 
    int option;
    do
    {
       printf("\n *************Main Menu************\n");
       printf(" 1: Creat list\n");
       printf(" 2: Display the list\n");
       printf(" 3: Add a node at the begning\n");
       printf(" 4: Add the node at the end\n");
       printf(" 5: Add the node at before given the node\n");
       printf(" 6: Add the node at after given the node\n");
       printf(" 7: Delete a node from beginnig\n");
       printf(" 8: Delete a node from the end\n");
       printf(" 9: Delete a given node\n");
       printf("10: Delete a node after a given node\n");
       printf("11: Sort list\n");
       printf("12: EXIT\n");
       printf("\n Enter your option : ");
       scanf("%d",&option);
       switch(option)
       {
           case 1: start = create_ll(start);
                    printf("\n Link list created\n");
                    break;
           case 2: start = display(start);break;
           case 3: start = insert_beg(start);break;
           case 4: start = insert_end(start);break;
           case 5: start = insert_before(start);break;
           case 6: start = insert_after(start);break;
           case 7: start = delete_beg(start);break;
           case 8: start = delete_end(start);break;
           case 9: start = delete_node(start);break;
           case 10: start = delete_after(start);break;
           case 11: start = sort_list(start);break;*/
       }
       }while(option!=12);
     return 0;
}

struct node *create_ll(struct node *start)
{
    struct node *new_node, *ptr;
    int num;
    printf("\n Enter 0 to exit\n");
    printf("\n Enter Data\n");
    scanf("%d",&num);
    while(num!=0)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node -> data = num;
        if(start == NULL)
        {
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while(ptr -> next != NULL)
               ptr = ptr->next;
            ptr ->next = new_node;
            new_node->next = NULL;
        }
        scanf("%d",&num);
    }
    return start;    
}

struct node *display(struct node *start)
{
    struct node *ptr;
    ptr = start;
    while(ptr!=NULL)
    {
         printf("%d   ",ptr->data);
         ptr = ptr->next;
    }
    return start;
}

struct node *insert_beg(struct node *start)
{
     struct node *new_node;
     int num;
     printf("\n Enter the data insert in begnning\n");
     scanf("%d",&num);
     new_node = (struct node*)malloc(sizeof(struct node));
     new_node ->data = num;
     new_node ->next = start;
     start = new_node;
     return start;
}

struct node *insert_end(struct node *start)
{
     struct node *new_node,*ptr;
     int num;
     printf("\n Enter the data insert in the end\n");
     scanf("%d",&num);
     new_node = (struct node*)malloc(sizeof(struct node));
     new_node ->data = num;
     new_node ->next = NULL;
     ptr = start;
     while(ptr-> next!=NULL)
     ptr = ptr ->next;
     ptr ->next = new_node;
     return start;
}

struct node *insert_before(struct node *start)
{
     struct node *new_node,*ptr, *preptr;
     int num,val;
     printf("\n Enter the data insert and in before a data\n");
     scanf("%d %d",&val,&num);
     new_node = (struct node*)malloc(sizeof(struct node));
     new_node ->data = val;
     ptr = start;
     while(ptr->data!=num)
     {
       preptr =ptr;
       ptr = ptr ->next;
     }
     preptr -> next = new_node;
     new_node -> next = ptr;
     return start;
}

struct node *insert_after(struct node *start)
{
     struct node *new_node,*ptr, *preptr;
     int num,val;
     printf("\n Enter the data insert and after data are insert\n");
     scanf("%d %d",&num,&val);
     new_node = (struct node*)malloc(sizeof(struct node));
     new_node ->data = num;
     ptr = start;
     preptr = ptr;
     while(preptr-> data !=val)
     {
         preptr = ptr;
         ptr = ptr -> next;
     }
     preptr -> next = new_node;
     new_node-> next = ptr;
     return start;
}

struct node *delete_beg(struct node *start)
{
   struct node *ptr;
   ptr = start;
   start = start->next;
   free(ptr);
   return start;
}

struct node *delete_end(struct node *start)
{
   struct node *ptr,*preptr;
   ptr = start;
   while(ptr->next!=NULL)
   {
       preptr = ptr;
       ptr = ptr->next;
   }
   preptr->next = NULL;
   free(ptr);
   return start;
}

struct node *delete_node(struct node *start)
{
	struct node *ptr, *preptr;
	ptr = start;
	printf("Enter the node who you are delete\n");
	int val;
	scanf("%d",&val);
	while(ptr->data!=val)
	{
		preptr=ptr;
		ptr= ptr->next;
	}
	preptr->next=ptr->next;
	free(ptr);
	return start;
}


struct node *delete_after(struct node *start)
{
	struct node *ptr, *preptr;
	int val;
	scanf("%d",&val);
	ptr= start;
	preptr=ptr;
	while(preptr->data!=val)
	{
		preptr= ptr;
		ptr=ptr->next;
	}
	preptr->next =ptr->next;
	free(ptr);
	return start; 
}


struct node *sort_list(struct node *start)
{
	struct node *ptr,*tmp;
	ptr=start;
	while(ptr!=NULL)
	{
		for()
		if(ptr->data > ptr->next->next)
		
	}
}



