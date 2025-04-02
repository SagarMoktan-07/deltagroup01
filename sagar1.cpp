#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0,a=0,b=0,s=0;
	FILE *p;
	p=fopen("F:\\moktan07\\lal1.txt","w");
	if(p==NULL)
	{
		printf("Sorry. The file couldn't be allocated.");
		exit(0);
	}
	printf("Enter first number:\n");
	scanf("%d",&a);
	fprintf(p,"%d",a);
	fprintf(p,"%d+",a);
	printf("Enter second number:\n");
	scanf("%d",&b);
	fprintf(p,"%d=",b);
	s=a+b;
	fprintf(p,"%d",s);
	printf("%d+%d=%d",a,b,s);
	fclose(p);
	return 0;
	
}
