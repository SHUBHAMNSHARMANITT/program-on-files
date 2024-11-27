/*Program 4
Write a c program that compares two files and returns 0 if they are equal and 1 if they are not equal*/
#include<stdio.h>
int main()
{
	FILE *com1 , *com2;
	com1 = fopen("FILE1.txt","r");
	com2 = fopen("FILE2.txt","r");
	char a1 , a2 ;
	int t ;
	while(((a1 = getc(com1))!=EOF)&&((a2 = getc(com2))!=EOF))
	{
	    if(a1==a2)
	    t=0;
	    else
	    {
	    	t = 1;
	    	break;
		}
	}
	if(t==0)
	printf("0");
	else printf("1");
	return 0;
 } 
