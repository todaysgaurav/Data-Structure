#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node
{
    char data;
    struct node* link;
}STACK_NODE;

void insertData(STACK_NODE** pStackTop);
void print(STACK_NODE** pStackTop);

bool push(STACK_NODE** pList, char dataIn);
bool pop(STACK_NODE** pList, char* dataOut);

                        // Main function
                        
int main()
{
    
    STACK_NODE* pStackTop;
    
    printf("Begnning Simple stack program\n");
    
    pStackTop = NULL;
    insertData(&pStackTop);
    print(&pStackTop);
    
    printf("\nEnd Simple Stack program\n");
    return 0;
}

                                       //Insert Data

void insertData(STACK_NODE** pStackTop)
{
    char charIn;
    bool success;
    printf("\nCreating characters:\n\n");
    int nodeCount;
    for( nodeCount = 0 ; nodeCount < 10 ; nodeCount++ )
    {
       charIn = rand() % 26 + 'A' ;
       printf("%c",charIn);
       success = push(pStackTop, charIn);
       if(!success)
       {
           printf("\nError 100 : out of memory\n");
           exit(100);
       }
    }
    printf("\n");
    return;
}
    
                                       // Push Stack

bool push(STACK_NODE** pStackTop, char charIn)
{
     STACK_NODE* pNew;
     bool  success;
     
     pNew = (STACK_NODE*)malloc(sizeof(STACK_NODE));
     if(!pNew)
       {
         success = false;
       }
     else
       {
         pNew->data = charIn;
         pNew->link = *pStackTop;
         *pStackTop = pNew;
         success = true;
       }
     return success;   
}

                                //print stack
                              
void print(STACK_NODE** pStackTop)
{
     char printData;
     
     printf("\nStack continue: \n\n");
     while(pop(pStackTop, &printData))
          printf("%c",printData);
     printf("\n");
     return ;
}

                                //Pop Stack
                            
bool pop(STACK_NODE** pStackTop, char* charOut)
{
     STACK_NODE* pDlt;
     bool success;
     
     if(*pStackTop)
       {
          success = true;
          *charOut = (*pStackTop)->data;
          pDlt   =  *pStackTop;
          *pStackTop = (*pStackTop)->link;
          free(pDlt);
       }
     else
       success = false;
 return success;
}
