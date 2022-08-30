#include <stdio.h>
#include <stdlib.h>



struct node {
    int data ;
    struct node * link ;
} * top = NULL ;
int isEmpty()
{
   if (top == NULL)
        return 1;
   else
        return 0 ;
}

void push ( int data ) {
    struct node* newNode ;
   newNode = malloc(sizeof(newNode));
   // Checking if memory can't be allocated for some reason
   if ( newNode == NULL )
   {
        printf ( " Stack Overflow . " ) ;
        exit (1);
    }
    newNode->data = data ;
    newNode->link = NULL ;
    
    newNode->link = top ;
    top = newNode ;
}

void print()
{
    struct node * temp ;
    temp = top ;
    if (isEmpty())
    {
        printf( " Stack Underflow . " );
        exit(1);
    }
    printf( " The stack elements are : " );
    while(temp) {
        printf( " %d " , temp->data);
        temp =temp->link;
    }
    printf ( " \n " ) ;
}

int main()
{
	push(1);
	push(2);
	push(3);
	print();
	return 0;
	
}
	   
