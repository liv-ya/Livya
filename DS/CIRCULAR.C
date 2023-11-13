#include<stdio.h>
#include<conio.h>
void enqueue();
void dequeue();
void display();

int queue[10];
int front=-1;
int rear=-1;
int item;
int n;

void main()
{
int ch;
clrscr();
printf("Enter the size of queue:");
scanf("%d",&n);
do{
printf("\nSELECT\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
       continue;
case 2:dequeue();
       continue;
case 3:display();
       continue;
default:exit(0);
}
}while(ch!=0);
}
void enqueue()
{
if(front==(rear+1)%n)
printf("Queue overflow");
else if(front==-1&&rear==-1)
{
printf("Enter the value:");
scanf("%d",&item);
front=0;
rear=0;
queue[rear]=item;
printf("value inserted");
}
else
{
printf("Enter the value:");
scanf("%d",&item);
rear=(rear+1)%n;
queue[rear]=item;
printf("value inserted");
}
}
void dequeue()
{
if(front==-1&&rear==-1)
{
printf("\nqueue underflow");
}
if(front==rear)
{
printf("Deleted\n",queue[front]);
queue[front]=NULL;
front=0;
rear=0;
}
else{
printf("Deleted\n",queue[front]);
queue[front]=NULL;
front=(front+1)%n;
}
}
void display()
{
int i;
printf("The circular queue is ");
for(i=0;i<n;i++)
{
if(queue[i]==NULL)
{
printf("-");
}
else{
printf("%d ",queue[i]);
}
}
printf("\n");
}



