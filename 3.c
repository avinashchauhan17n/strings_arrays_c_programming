/*3 )Declare an array of size 10. Enter 10 elements and save them in the array. Print the array . 
Find out the biggest and smallest numbers and their indexes and print.  */

#include<stdio.h>
int main()
{
        int number[10];
	int BIG;
	int SMALL;
        int i,INDEX_B,INDEX_S;
	
       		for(i=0;i<10;i++)                                 // storing 10 values by user 
        	{
			printf("Enter %d element \n",i+1);
       			scanf("%d",&number[i]);
        	}


        printf("\n Printing 10 values \n");


        	for(i=0;i<10;i++)                                 // printing 10 values
        	{
        		printf("Element %d = %d\n",i+1,number[i]);
        	}


        printf("\n Finding BIGGER and SMMALLER\n");

		BIG = number[0];
		SMALL = number[0];

        	for(i=1;i<10;i++)                                 // Bigger and smaller
        	{
			if(number[i] > BIG)
				{
				BIG = number[i];
				INDEX_B=i;
				}
				
			else if(number[i]<SMALL)			
				{
				SMALL = number[i];
				INDEX_S=i;
				}
        	}



         	 printf("\n");
	 	 printf("Bigger[%d]=%d and Smaller[%d]=%d\n",INDEX_B,BIG,INDEX_S,SMALL);

}


