/*4 )Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for elements and print them: 
int arr[5] = {}; 
int arr[10] = {2.4,5.6,7.3};
int arr[3] = {1,2,3,4,5};
int arr[0] = {};
int arr[0] = {1,2,3,4,5};
int arr[] = {};
int arr[‘a’]; */

#include<stdio.h>
int main()
{
	int arr[5]={};
	int i;
	
		for(i=0;i<5;i++)
		{
			printf("arr[%d]=%d\n",i,arr[i]);
		}
	printf("Size:arr[5] %d\n",sizeof(arr));

        int arr1[10]={2.4,5.6,7.3};

                for(i=0;i<10;i++)
                {
                        printf("arr1[%d]=%d\n",i,arr1[i]);
                }
        printf("Size:arr1[10] %d\n",sizeof(arr1));


        int arr2[3]={1,2,3,4,5};

                for(i=0;i<3;i++)
                {
                        printf("arr2[%d]=%d\n",i,arr2[i]);
                }
        printf("Size:arr2[3] %d\n",sizeof(arr2));


        int arr3[0]={};

                for(i=0;i<1;i++)
                {
                        printf("arr3[%d]=%d\n",i,arr3[i]);
                }
        printf("Size:arr3[0] %d\n",sizeof(arr3));

        int arr4[0]={1,2,3,4,5};

                for(i=0;i<1;i++)
                {
                        printf("arr4[%d]=%d\n",i,arr4[i]);
                }
        printf("Size:arr4[0] %d\n",sizeof(arr4));

        int arr5[]={};

                for(i=0;i<10;i++)
                {
                        printf("arr5[%d]=%d\n",i,arr5[i]);
                }
        printf("Size:arr5[] %d\n",sizeof(arr5));


        int arr6['a'];

                for(i=0;i<10;i++)
                {
                        printf("arr6[%d]=%d\n",i,arr6[i]);
                }
        printf("Size:arr4['a'] %c\n",sizeof(arr6));


}
