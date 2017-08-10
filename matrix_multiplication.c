/* matrix Multiplication property is that A[m][n] * B[n][k]  =  Result[m][k] */

#include<stdio.h>

int main()
{

        int A[2][3]={{0},{0}};
        int B[3][2]={{0},{0},{0}};
     
	int MUL[2][2]={{0},{0}};
	int i,j,k,l;
        


        for(i=0;i<2;i++)                                // User input values for Matrix A
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

	   for(i=0;i<3;i++)                                // User input values for Matrix B
        {
                for(j=0;j<2;j++)

                {
                        printf("Enter matrix Values B[%d][%d] one by one\n",i,j);
                        scanf("%d",&B[i][j]);
                }
        }

        printf("\n\n Matrix [B]\n\n");



         for(i=0;i<3;i++)                                // printing values for Matrix B
        {
                for(j=0;j<2;j++)

                {
                        printf("%d\t",B[i][j]);
                }
        printf("\n\n");

	}

	
	printf("\n Multiplication result ..................\n\n"); // multiplication result


	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
		
			MUL[i][j] += A[i][k] * B[k][j];
	
			}
		}
	
		
		

	}

	
	for(i=0;i<2;i++)
	{

		for(j=0;j<2;j++)
		{
		printf("%d\t",MUL[i][j]);

		}
	printf("\n");

	}






}
