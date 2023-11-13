#include<stdio.h>
#include<conio.h>
int i,j,u,v,n,a,b;
int visited[10]={0},new=1,min,mincost=0,cost[10][10];
void main()
{
clrscr();
printf("Enter the number of nodes:");
scanf("%d",&n);
printf("\n Enter the adjacency matrix:");
for(i=0;i<=n;i++)
{
 for(j=0;j<=n;j++)
 {
  scanf("%d",&cost[i][j]);
  if(cost[i][j]==0)
  cost[i][j]=999;
 }
 visited[1]=1;
 printf("\n");
}
while(new<n)
{
   for(i=1,min=999;i<=n;i++)
   for(j=1;j<=n;j++)
   if(cost[i][j]<min)
     {
	  if(visited[i]!=0)
	  {
	    min=cost[i][j];
	    a=u=i;
	    b=v=j;
	  }
	  if(visited[u]==0||visited[v]==0)
	  {
	    printf("\nEdge %d: (%d %d)\ncost: %d",new++,a,b,min);
	    mincost=mincost+min;
	    visited[b]=1;
	  }
     cost[a][b]=cost[b][a]=999;
     }
 }
printf("\nMincost: %d",mincost);
getch();
}
