/*Program 3
write a C program to copy content of one fle into another.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *f1 , *f2;
	char a ;
	f1 = fopen("F1.txt","r");
	f2 = fopen("F2.txt","w");
	while( (a = getc(f1))!=EOF)
    	putc(a , f2);
	return 0 ; 
}
