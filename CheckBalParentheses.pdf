#include<stdio.h>
#define max 50
int  main()
{
	char stk[max],exp[100];
	int top,i;	
	top = -1;	
	printf("\nEnter an infix expression ");
	scanf("%s",exp);	
	for(i=0; exp[i] != '\0'; i++)
	{
		if( exp[i]=='(' || exp[i] =='[' || exp[i] == "{" )
		{
			top++;
			stk[top]= exp[i];
		}
		else
		{
		   if ( exp[i] == ')' )
		     {
			if( stk[top] == '(' )
			top--;
		     }
		   if ( exp[i] == ']' )
		     {
		        if( stk[top] == '[' )
			top--;
		     }
		   if ( exp[i] == "}" )
		     {
		        if( stk[top] == "{" )
			top--;
		     }
		  
		  }
		 
		 
	 }
	 
	if( top == -1 )
		printf("Exp is balanced\n");
	else
		printf("Exp is not balanced\n");
   return 0;
} 
