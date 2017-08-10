#include<stdio.h>

int main()

{

	int m,n,i,j;
	printf("Enter Row and column to generate one matrix");
	scanf("%d %d",&m,&n);
	int array[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("Enter element for array[%d][%d]\n",i,j);
		scanf("%d",&array[i][j]);		
		}

	}

	

printf("\n\nPrinting values\n\n");

	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                printf("%d\t",array[i][j]);                
                }
	printf("\n");

        }

array[n][m];
printf("printing transpose \n");


	
        for(i=0;i<n;i++)
        {
                for(j=0;j<m;j++)
                {
                printf("%d\t",array[j][i]);
                }
	printf("\n");

        }






}

