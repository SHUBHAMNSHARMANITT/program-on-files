/* Program 2
a file named DATA contains a series of a integer numbers. WRite a C program to read these numbers and
then write all 'odd' numbers to a file to be called ODD and all 'even' numbers to a file to be called EVEN.*/
#include<stdio.h>
int main()
{
	FILE *main , *odd , *even;
	int a;
	main = fopen("DATA.txt","r");
	odd = fopen("ODD.txt","w");
	even = fopen("EVEN.txt","w");
	if(main == NULL)
	printf("TRUE");
	while(fscanf(main,"%d",&a)!=EOF)
	{
		if(a%2==0)
		fprintf(even , "%d ", a);
		else
		fprintf(odd, "%d ",a);
	}
	fclose(main);
	fclose(odd);
	fclose(even);
	printf("\nThank You");
    return 0; 
}

