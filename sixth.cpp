/*Program 6 
Write a C program that reas a file containing integers and appends at its end the sum of all integers.*/
#include<stdio.h>
int main()
{
	FILE *ptr , *ptr2;
	int sum = 0;
	int a , count =0;
	ptr = fopen("SUM.txt","r");
	while((a = getw(ptr))!=EOF)
	count+=a;
	ptr2 = fopen("SUM.txt","a");
	putw(count, ptr2);
	printf("The sum is appended in the file SUM.txt");
   	return 0 ; 
}
