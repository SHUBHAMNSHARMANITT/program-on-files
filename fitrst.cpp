/*program 1 
write a c program to read data from keyboard , write it t o a file called INPUT,
 again read same data and print the same data from input file and display it on screen*/
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
 	FILE *ptr;
 	char str[1000];
 	printf("Enter data in fle:");
 	fgets(str,1000,stdin);
 	ptr = fopen("INPUT.txt","w");
 	fputs(str,ptr);
 	fclose(ptr);
 	ptr = fopen("INPUT.txt","r");
 	printf("\nReading data from file:");
 	while(fgets(str,1000,ptr)!=NULL)
        printf("%s",str); 	
 	return 0 ; 
 	
 }
 
