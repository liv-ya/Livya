#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insertfirst();
void insertlast();
void insertpos();
void deletefirst();
void deletelast();
void deletepos();
void display();
void taildisplay();
struct node
{
int data;
struct node *prev,*next;
}*head,*tail;
int n = 0;
void main()
{
int ch;
clrscr();
do
{
printf("SELECT\n1.Insert node at first\n2.Insert node at Last\n3.Insert node at Position\n4.Delete node at first\n5.Delete node at Last\n6.Delete node at Position\n7.Display\n8.Tail display\n9.Exit\n");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
	    insertfirst();
	    printf("%d", n);
	    continue;

	case 2:
	    insertlast();
	    continue;

	case 3:
	    insertpos();
	    continue;

	case 4:
	    deletefirst();
	    continue;

	case 5:
	    deletelast();
	    continue;

	case 6:
	    deletepos();
	    continue;
	case 7:
	    display();
	    continue;
	case 8:
	     taildisplay();
	     continue;

	default:
	    exit(0);
	}

    } while (ch != 0);
}
void insertfirst()
{
    struct node *newnode;
    int data;
    printf("Enter node value\n");
    scanf("%d", &data);

    // if list is empty
    if (head == NULL)
    {
	n++;
	head = malloc(sizeof(struct node));
	head->data = data;
	head->prev = NULL;
	head->next = NULL;
	tail = head;
	printf("Node Inserted\n");
    }
    else
    {
	n++;
	newnode = malloc(sizeof(struct node));
	newnode->data = data;
	newnode->prev = head->prev;
	newnode->next = head;
	head->prev = newnode;
	head = newnode;
	printf("Node Inserted\n");
    }
}
void insertlast()
{
struct node *newnode, *curr,*previous;
    int data;
    printf("\n Enter node value:");
    scanf("%d",&data);
    if (head == NULL)
    {
    insertfirst();
    return;
    }
    else
    {
	n++;
	curr=head;
	while(curr!=NULL)
	{
	previous = curr;
	curr = curr->next;
	}
	newnode = malloc(sizeof(struct node));
	newnode->data = data;
	newnode->prev = previous;
	newnode->next = NULL;
	previous->next = newnode;
	tail = newnode;
	printf("Node Inserted\n");
    }
}
void insertpos()
{
struct node *curr,*newnode,*next;
int data,pos,i;
printf("Enter position to insert:");
scanf("%d",&pos);
if(pos<1 || pos>n)
{
printf("invalid position");
}
else
{
if(pos==1)
{
insertfirst();
}
else if(pos==n)
{
insertlast();
}
else
{
n++;
printf("enter node value:");
scanf("%d",&data);
newnode = malloc(sizeof(struct node));
newnode->data = data;
curr = head;
pos--;
for(i=0;i<pos;i++)
{
curr = curr->next;
}
newnode->prev = curr;
newnode->next = curr->next;
curr->next = newnode;
curr->next->next->prev = newnode;
printf("Node inserted");
}
}
}
void deletefirst()
{

struct node *temp;
if(head==NULL)
printf("List empty");
else if(head->next==NULL)
{
printf("Node deleted id %d\n",head->data);
head = NULL;
free(head);
n--;
}
else
{
printf("Note delted is %d\n",head->data);
temp = head;
head = head->next;
head->prev = NULL;
free(temp);
n--;
}
}
void deletelast()
{
struct node *temp;
if(head==NULL)
printf("List empty\n");
else if(head->next ==NULL)
{
printf("Node deleted is %d\n",head->data);
head = NULL;
free(head);
n--;
}
else
{
printf("Node delted is %d\n",tail->data);
temp = tail;
tail = tail->prev;
tail->next = NULL;
free(temp);
n--;
}
}
void deletepos()
{
struct node*temp,*curr,*prev;
int pos,i;
if(head==NULL)
{
printf("List empty\n");
return;
}
printf("Enter the position to be deleted:");
scanf("%d",&pos);
if(pos<1 || pos>n)
{
printf("Invalid position");
return;
}
else if(pos==1)
{
deletefirst();
}
else if(pos==n)
{
deletelast();
}
else
{
curr = head;
for (i = 0; i < pos - 1; ++i)
{
prev = curr;
curr = curr->next;
}
printf("%d \n", curr->data);
temp = curr;
prev->next = curr->next;
curr->next->prev = prev;
free(temp);
n--;
}
}

void display()
{

	struct node *curr;
	printf("The list is\n");
	if (n == 0)
	{
		printf("Empty\n");
		return;
	}
	curr = head;
	while (curr != NULL)
	{

		printf("[%d<--%d-->%d] ", curr->prev->data, curr->data, curr->next->data);
		curr = curr->next;
	}
	printf("\n");
}

void taildisplay()
{

	struct node *curr;

	printf("The list is\n");

	if (n == 0)
	{
		printf("Empty\n");
		return;
	}
	curr = tail;
	while (curr != NULL)
	{

		printf("[%d<--%d-->%d] ", curr->next->data, curr->data, curr->prev->data);
		curr = curr->prev;
	}
	printf("\n");
}

