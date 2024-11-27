/*program 5 
 Write a  C program that appends one file after the end of another.*/
 #include<stdio.h>
 int main()
 {
 	FILE *ptr1 , *ptr2 ;
 	ptr1 = fopen("append1.txt","a");
 	ptr2 = fopen("append2.txt","r");
 	char ch; 
 	while((ch = getc(ptr2))!=EOF)
 	putc(ch,ptr1);
 	printf("The file 2 is appended to file 1.")
	return 0;
 }
