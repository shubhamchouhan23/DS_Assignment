/*What is stack? What is Queue? 
  Make a program to demonstrate functionality of both concept using array.  */

// Last in First out 

// Stack size to be 100 mb ?? How to do it ?


#include<stdio.h>
void push();
void pop();
void output();
int a[9],i,j,n,top=-1;
int c=0;
void main()
{
	int user;
	scanf("Size of stack = %d \n",&user);
	user = (user*1024)/4;
	int b[user];
	printf("size of stack is %ld \n",sizeof(b));
    printf("enter the element in the stack\n");
    scanf("%d",&n);
    while(c!=4)
    {
        printf("\n1 push\n2 pop\n3 output\n4 Exit\n"); 
        printf("ENter your choice : ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {              // Scope of a variable ????
                push();
                break;
            }
            case 2:
            {
		int y = 2
		double y = 3.3                
		pop();
                break;
            }
            case 3:
            {
                output();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                printf("Enter the valid choice");
            }
        };
    }
}

// push operation
void push()
{
    int val;
    if(top==n-1)
    {
        printf("stack overflow\n");
    }
    else
    {
        printf("enter the value\n");
        scanf("%d",&val);
        top=top+1; // Is we can write top++
        a[top]=val;
    }
}
// pop operation
void pop()
{
    if(top==-1)
    {
        printf("underflow\n");
    }
    else
    top = top-1;
}
// output
void output()
{
    for(i=top;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
    if(top==-1)
    {
        printf("stack is empty\n");
    }
}
