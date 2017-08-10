/*9 ) Write a program to reverse an array and print it: 
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1}; */

#include<stdio.h>
int main()
{	
	
	int array[5]={1,2,3,4,5};
	int i=0,j=4,temp;
	
	while(i<=j)
	{
	temp=array[i];
	array[i]=array[j];
	array[j]=temp;
	i++;
	j--;
	}

	for(i=0;i<5;i++)
	{
	printf("Array[%d] = %d\n",i,array[i]);
	}


}
