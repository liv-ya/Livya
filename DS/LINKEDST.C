#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
int data;
struct node *next;
}*top;
void main()
{
int ch;
clrscr();
do{
printf("select\n1.push\n2.pop\n3.display\n4.exit");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       continue;
case 2:pop();
       continue;
case 3:display();
       continue;
default:exit(0);
}
}while(ch!=0);
}
void push()
{
struct node *newnode;
int data;
printf("Enter the node value:");
scanf("%d",&data);
//if list is empty
if(top->data==NULL)
{
top=malloc(sizeof(struct node));
top->data=data;
top->next=NULL;
printf("\n node inserted");
}
//if list has atleast one element
else
{
newnode=malloc(sizeof(struct node));
newnode->data=data;
newnode->next=top;
top=newnode;
printf("node inserted");
}
}
void pop()
{
struct node *temp;
if(top==NULL)
{
printf("\n no element to delete");
}
else if(top->next==NULL)
{
printf("\nThe element deleted is %d",top->data);
top=NULL;
}
else
{
printf("\n The element deleted is %d",top->data);
temp=top;
top=top->next;
free(temp);
}
}
void display()
{
struct node *curr;
if(top==NULL)
printf("\n stack is empty");
else
{
curr=top;
printf("\n The stack is ");
while(curr !=NULL)
{
printf("%d\n",curr->data);
curr=curr->next;
}
}
printf("\n\n");
}