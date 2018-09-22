# include <stdio.h>
# include <string.h>
# define MAX 20
void infixtoprefix(char infix[20], char prefix[20]);
void reverse(char array[30]);
char pop();
void push(char symbol);
int isOperator(char symbol);
int prcd(char symbol);
int top = -1;
char stack[MAX];

int main() 
   {
	char infix[20], prefix[20], temp;
	printf("Enter infix operation: ");
	scanf("%s",infix);
	infixtoprefix(infix, prefix);
	reverse(prefix);
	puts((prefix));
	return 0;
   }
void infixtoprefix(char infix[20], char prefix[20]) 
  {
	int i, j = 0;
	char symbol;
	stack[++top] = '#';
	reverse(infix);
	for (i = 0; i < strlen(infix); i++) 
	  {
		symbol = infix[i];
		if (isOperator(symbol) == 0) 
		{
	  	prefix[j] = symbol;
	  	j++;
	  	} 
	  	else 
	  	{
  		  if (symbol == ')') 
  		  {
   		     push(symbol);
   		  }
   		  else if (symbol == '(') 
   		  {
    		     while (stack[top] != ')') 
    		     {
      		       prefix[j] = pop();
      		       j++;
    		     }
    		     pop();
    		  } 
    		  else 
    		  {
    			if (prcd(stack[top]) <= prcd(symbol)) 
    			 {
     			   push(symbol);
     			 } 
     			 else 
     			 {
       			     while (prcd(stack[top]) >= prcd(symbol)) 
       			      {
        			prefix[j] = pop();
       				j++;
      			      }
     			  push(symbol);
    			  }
     		      }
  	         }
            }
     while (stack[top] != '#')
	{
	    prefix[j] = pop();
	    j++;
	}
      prefix[j] = '\0';
 }
 void reverse(char array[30]) 
 {
    int i, j;
    char temp[100];
    for (i = strlen(array) - 1, j = 0; i + 1 != 0; --i, ++j) 
       {
           temp[j] = array[i];
       }
    temp[j] = '\0';
    strcpy(array, temp);
 }
 char pop() 
     {
        char a;
        a = stack[top];
        top--;
        return a;
     }
 void push(char symbol) 
    {
 	top++;
 	stack[top] = symbol; 
    }
 int prcd(char symbol)
  {
	if(symbol == '+' || symbol == '-')
	     return 2;
	else if(symbol == '*' || symbol == '/' )
	     return 4;
	else if(symbol == '$' || symbol == '^' )
	     return 6;
	else if(symbol == '(' || symbol == ')' || symbol == '#' )
	     return 1; 
  }
int isOperator(char symbol) 
   {
  	if(symbol == '+' || symbol == '-' ||  symbol == '*' || symbol == '/' || symbol == '^' )
      	    return 1;
  	else if( symbol == '$' || symbol == '&' || symbol == '(' ||symbol == ')' )
            return 1; 
 	 else
            return 0; 
 }
