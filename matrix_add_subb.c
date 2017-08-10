#include<stdio.h>

int main()
{

	int A[2][3]={{0},{0}};
	int B[2][3]={{0},{0}};
	int ADD[2][3]={{0},{0}};
	int SUB[2][3]={{0},{0}};
	int i,j;

	for(i=0;i<2;i++)    				// User input values for Matrix A
	{
		for(j=0;j<3;j++)
		
		{
			printf("Enter matrix Values A[%d][%d] one by one\n",i,j);
			scanf("%d",&A[i][j]);
		}
	}

	printf("\n\n Matrix [A]\n\n");


	 for(i=0;i<2;i++)                                // printing values for Matrix A
        {       
                for(j=0;j<3;j++)

                {
                        printf("%d\t",A[i][j]);
                }
	printf("\n\n");
        }

        for(i=0;i<2;i++)                                // User input values for Matrix B
        {
                for(j=0;j<3;j++)

                {
                        printf("Enter matrix Values B[%d][%d] one by one\n",i,j);
                        scanf("%d",&B[i][j]);
                }
        }

        printf("\n\n Matrix [B]\n\n");


         for(i=0;i<2;i++)                                // printing values for Matrix B
        {       
                for(j=0;j<3;j++)

                {
                        printf("%d\t",B[i][j]);
                }
        printf("\n\n");
        }


	printf("\n\n ADDItion result is : \n\n");   // addition calculation

	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		ADD[i][j]= A[i][j] + B[i][j] ;
		}
	}

	for(i=0;i<2;i++)                                // printing Addition for Matrix A and B
        {
                for(j=0;j<3;j++)

                {
                        printf("%d\t",ADD[i][j]);
                }
        printf("\n\n");
        }


	
			

	printf("\n\n Subtraction result is: \n\n");  // subtraction for matrix A and B

	        for(i=0;i<2;i++)
        {
                for(j=0;j<3;j++)
                {
                SUB[i][j]= A[i][j] - B[i][j] ;
                }
        }

        for(i=0;i<2;i++)                                // printing Subtraction for Matrix A and B
        {
                for(j=0;j<3;j++)

                {
                        printf("%d\t",SUB[i][j]);
                }
        printf("\n\n");
        }


}
