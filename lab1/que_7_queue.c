/*
Q6.What is Queue? 
   Make a program to demonstrate functionality using array.
*/
// Queue is First in first out , Insert at rear and delete at front


#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue();
void dequeue();
void peep();
void display();

int main() {
    int choice;

    while(1) {

        printf("\nEnter the choice:\n1.enqueue\n2.dequeue\n3.peek\n4.display\n5.exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peep();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Invalid input!!! Please try again\n");
            break;
        }
    }

    return 0;
}

void enqueue() {
    int x;
    printf("Enter the element which you want to enter:\n");
    scanf("%d", &x);

    if(rear == SIZE - 1) 
    {
        printf("Stack is full you cant push more elements\n");
    }
    else if(front == -1 && rear == -1) 
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if(front == -1 && rear == -1) {
        printf("The Queue is empty.\n");
    }
    else if(front == rear) 
    {
        front = rear = -1;
    }
    else 
    {
        printf("The deleted element in the queue is:%d\n", queue[front]);
        front++;
    }
}

void peep() {   // peep is curent position of queue 

    int ans;

    if(front == -1 && rear == -1) {
        printf("The Queue is empty.\n");
    }
    else 
    {
        ans = queue[front];
        printf("Value at front is: %d\n", ans);
    }

}

void display() {
    if(front == -1 && rear == -1) {
        printf("The Queue is empty.\n");
    }
    else
    {
        printf("The Queue elements are:\n");
        for(int i = front; i < rear + 1; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
