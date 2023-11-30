#include<stdio.h>
void creation();
void insertion();
void deletion();
void traversal();
int a[20],n,p,i,item;
void main()
{
int c;
while(1)
{
printf("menu\n");
printf("1.creation\n2.insertion\n3.deletion\n4.traversal\n5.exit\nenter your choice:");
scanf("%d",&c);
if(c==1)
creation();
else if(c==2)
insertion();
else if(c==3)
deletion();
else if(c==4)
traversal();
else
exit(0);
}
}
void creation()
{
printf("enter the limit\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
}
void insertion()
{
printf("enter the position to be inserted");
scanf("%d",&p);
printf("enter the item\n");
scanf("%d",&item);
n++;
i=n-1;
while(i>=p)
{
a[i+1]=a[i];
i--;
}
a[p]=item;
printf("item is inserted");
}
void deletion()
{
printf("enter the position to be deleted\n");
scanf("%d",&p);
i=p;
item=a[p];
while(i<=n)
{
a[i]=a[i+1];
i++;
}
n--;
printf("%d is deleted \n",item);
}
void traversal()
{
for(i=1;i<n;i++)
{
printf("%d\n",a[i]);
}
}
