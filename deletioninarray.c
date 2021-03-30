//Program by Waseem Bhat
#include<stdio.h>
int main()
{
	int arr[10],size,i,pos,del;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the elements of array\n");
	for(i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
}
	printf("Enter pos\n");
	scanf("%d",&pos);
	{
			del=arr[pos-1];
		printf("deleted element is =%d \n ",del);
		 }
	for(i=pos-1;i<size-1;i++)
	{
		arr[i]=arr[i+1];
	}
	size--;
	
	{
		for(i=0;i<size;i++)
		printf("%d ",arr[i]);
}
	
}