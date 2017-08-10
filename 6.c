/*6 )Write a program to search for a specific element given by the user, in an array and display its index. */

#include<stdio.h>
#define size 25
int main()
{	int i,location=0,element;
	int array[size]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};

	printf("Enter a element to search in array\n");
	scanf("%d",&element);
	
	for(i=0;i<size-1;i++)
	{
		if(element==array[i])
		{
		printf("Element: %d Found at location %d\n",element,i);
		location=1;
		}
		
	}
	if(location==0)
	printf("Element not found\n");
}
