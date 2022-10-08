#include<stdio.h>
int a[20][20],stack[20],visited[20],top=-1,n,i,j;
void Dfs(int v)
{
	for(i=0;i<n;i++)
	{
		if(a[v][i] && !visited[i]) //finding the neighbour elements
		{
			stack[++top]=i;
		}
	}
	if(top!=-1)
	{
		visited[stack[top]]=1; //updating the status to 1
		Dfs(stack[top--]);
	}
}
int main()
{
	int v;
	printf("Enter the number of vertices\n");
	scanf("%d",&n);
	printf("Enter the adjacency matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the starting vertex\n");
	scanf("%d",&v);
	for(i=0;i<n;i++)
	{
		stack[i]=0;
		visited[i]=0;
	}
	Dfs(v);
	printf("The reachable nodes are:\t \n");
	for(i=0;i<n;i++)
	{
		if(visited[i])
		{
			printf("%d is reachable from %d\n",i,v);
		}
		else
		{
			printf("%d is not reachable from %d\n",i,v);
		}
	}
}
