/*Declare a two dimensional array of elements for sales details of a store, for each item, for each sales man. Take the sales values as input and print the array in matrix form.
Find out and print the following :
1 ) Total sales by each sales man
2 ) Total sales for a item
3 ) Total sales */

#include<stdio.h>

int main()
{
	int SalesPerson,Items;
	int i,j;

	printf("Enter No. of Sales Person\n");
	scanf("%d",&SalesPerson);

	printf("Enter No. of items\n");
        scanf("%d",&Items);


	int STORE[SalesPerson][Items];
	
	for(i=0;i<SalesPerson;i++)	
	{
		for(j=0;j<Items;j++)
		{
			printf("Enter element STORE[%d][%d}\n",i,j);
			scanf("%d",&STORE[i][j]);
		}
	}
	
	printf("\n\nPrinting the Table For Verification.......................\n\n");

        for(i=0;i<SalesPerson;i++)
        {
                for(j=0;j<Items;j++)
                {
                        printf("%d\t",STORE[i][j]);
                        
                }
		printf("\n\n");
        }
	
	printf("\n--------------------data calculation for Store------------------\n");
	

	int SALES[SalesPerson];
//----------------------------initialization of variable size array as it can't be directly initialized---------------
	for(i=0;i<SalesPerson;i++)
	{
	SALES[i]=0;
	}
//--------------------------------------------------------------------------------------------------------------------

        for(i=0;i<SalesPerson;i++)
        {
                for(j=0;j<Items;j++)
                {
		SALES[i]+=STORE[i][j];			
                      
                }
        }

	printf("\n---------------------------sales total for each Sales person-------\n");
	
	for(i=0;i<SalesPerson;i++)
	{
		
	printf("Sales Person [%d] Total = %d\n ",i+1,SALES[i]);

	}
	
	int TotalItem[Items];

//----------------------------initialization of variable size array as it can't be directly initialized---------------
        for(i=0;i<Items;i++)
        {
        TotalItem[i]=0;
        }
//--------------------------------------------------------------------------------------------------------------------

	printf("\n--------------------Total Sale For each item---------------------------\n");
	
	for(i=0;i<Items;i++)
        {
                for(j=0;j<SalesPerson;j++)
                {
                
		TotalItem[i]+= STORE[j][i];

                }
        }

        printf("\n-------------------Total Sale of each item-------\n");

        for(i=0;i<Items;i++)
        {

        printf("Item[%d] Total = %d\n",i+1,TotalItem[i]);

        }

	int sum=0;
	for(i=0;i<Items;i++)
	{
	sum+=TotalItem[i];
	}

	printf("Total Sales of all Items is %d: \n\n",sum);


}
