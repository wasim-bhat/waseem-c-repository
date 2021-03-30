//program by waseem bhat
#include<stdio.h>
int main()
{
	int arr[100]={1,2,4,5,6},size,i,temp=1;;
	int num,pos;
	printf("Enter the size of array\n");
	scanf("%d",&size);
 printf("Enter the elements of array\n");
for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
}
	printf("Elements in array are: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
}
printf ("\n Enter the number to insert in array: ");
scanf("%d",&num);
printf("Enter Postion: ");
scanf("%d",&pos);
for(i=size-1;i>=pos-1;i--)
{
	arr[i+1]=arr[i];
	temp++;
}
arr[pos-1]=num;

size++;
printf("\n");
printf("After insertion the elements are: ");
for(i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
return 0;
}