#include<stdio.h>
#include<conio.h>
void unionAB(int a[10],int b[10]);
int find(int a[10],int b[10]);
void main()
{
int a[]={2,4,6,7};
int b[]={1,3,5};
int parent;
clrscr();
unionAB(a,b);
parent=find(a,b);

	 if(parent==a[0])
		printf("Element found in set A\nRoot node = %d",parent);
	 else if(parent==b[0])
		printf("Element found in set B\nRoot node = %d",parent);
	 else
		printf("Not Found\n");

	 getch();
	 }
//union of set A and set B
void unionAB(int a[10],int b[10])
{
int i,j,k,unionAB[10];
i=0;
for(j=0;j<4;j++)
{
unionAB[i]=a[j];
i++;
}
for(k=0;k<3;k++)
{
unionAB[i]=b[k];
i++;
}

printf("\nDisjoint set A\n");
for(i=0;i<4;i++)
printf("%d ",a[i]);

printf("\nDisjoint set B\n");
for(i=0;i<3;i++)
printf("%d ",b[i]);
printf("\nUnion of Disjoint set A and B\n");
for(i=0;i<7;i++)
printf("%d ",unionAB[i]);
}
//find operation of A and B

int find(int a[10],int b[10])
{
		int item,i;
		printf("\nEnter the number to be searched\n");
		scanf("%d",&item);
		for(i=0;i<5;++i)
		{
			if(a[i]==item)
			{
				return a[0];
			}
		}
		for(i=0;i<4;++i)
		{
			if(b[i]==item)
			{
				return b[0];
			}

		}
		return -1;
	 }

