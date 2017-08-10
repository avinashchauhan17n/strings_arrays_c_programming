/*2 ) Write the following program : 
Declare a character array without size.
Initialize the array with characters of your name.
Print your name using for loop. */

#include<stdio.h>
#define size 21

int  main()
{
        char character[]={'A','v','i','n','a','s','h',' ','S','i','n','g','h',' ','C','h','a','u','h','a','n'};
        unsigned short i;

	printf("\n\n");

        for(i=0;i<size;i++)                                 // Assign and print all numbers
        {
        printf("%c",character[i]);
        }

	printf("\n\n");
}


