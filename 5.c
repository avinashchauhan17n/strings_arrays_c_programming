#include<stdio.h>

int main()
{
	int m,n,i,j;

	printf("Enter Two dimensional Value rows and columns \n");
	scanf("%d %d",&m, &n);

	char NAMES[m][n];
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("Enter NAMES[%d][%d]\n",i,j);
		scanf("\n%c",&NAMES[i][j]);
		}

	}

	printf("\n\n");
	
	for(i=0;i<m;i++)
	        {
                for(j=0;j<n;j++)
                {
                printf("%c\t",NAMES[i][j]);
                
                }
	printf("\n\n");

        }

	

	

}
