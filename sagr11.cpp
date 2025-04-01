#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0;
	char b[50];
	FILE *a;
	a=fopen("E:\\SAGARMOKTAN\\lal.txt","a");
	if(a==NULL)
	{
		printf("Sorry! The file couldnot be allocated.");
		exit(0);
	}
	printf("Success");
	fprintf(a,"Hello");
	printf("\nEnter any string:");
	gets(b);
	fprintf(a,"\n");
	fputs(b,a);
	fclose(a);
	return 0;
}
