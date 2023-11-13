#include<stdio.h>
#include<conio.h>
void linear(int a[],int n,int item);
void binary(int a[],int n,int item);
void main()
{
int a[20],n,item,i,ch;
clrscr();
printf("\nEnter the size of array:");
scanf("%d",&n);
printf("\nEnter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("The array is: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}

printf("\n");
printf("\n Enter the element to be searched:");
scanf("%d",&item);
printf("\n Enter any choice\n1.Linear search\n2.Binary search");
scanf("%d",&ch);
switch(ch){
case 1:linear(a,n,item);
       break;
case 2:binary(a,n,item);
       break;
default:exit();
       break;
}
getch();
}

void linear(int a[],int n,int item)
{
int i,flag=0;
for(i=0;i<n;i++){
if(a[i]==item){
printf("\nElement %d found in position %d",item,i+1);
flag=1;
break;
}
}
if(flag==0){
printf("\n Element not found");
}
}
void binary(int a[], int n,int item)
{
int i,j,temp,low,mid,high,flag=0;
for(i=0;i<=n-1;i++){   //sorting
for(j=i+1;j<=n;j++){
if(a[i]>a[j]){
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\nSorted array");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
low=0;
high=n-1;
for(i=low;i<=high;++i){

		mid=(low+high)/2;

		if(a[mid]==item){
			printf("\n%d found at position %d\n",item,mid+1);
			flag=1;
			break;
		}
		else if(item<a[mid]){
			high=mid-1;
		}
		else{
			low=mid+1;
		}

	}

	if(flag==0){
		 printf("\n%d not found\n",item);
	}
}