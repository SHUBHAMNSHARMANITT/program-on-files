/*Program 7
Write a c program that reads characters from a file and prints their ASCII numbers.*/
#include<stdio.h>
int main()
{
	FILE *ptr;
	char a;
	ptr = fopen("ASCII.txt","r");
	while((a = getc(ptr))!=EOF)
	printf("%d ",a);
	return 0 ; 
}

