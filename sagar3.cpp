#include<stdio.h>
#include<stdlib.h>
void read();
int main()
{
	int i=0;
	char par[50];
	FILE *p;
	p=fopen("F:\\moktan07\\lal2.txt","w");
	printf("Enter the paragraph:\n");
	gets(par);
	fputs(par,p);
	fclose(p);
	read();
	return 0;
}
void read()
{
	int i=0,space;
	char re[50];
	FILE *fi;
	fi=fopen("F:\\moktan07\\lal2.txt","r");
	fgets(re,50,fi);
	for(i=0;re[i]!='.';i++)
	{
		if(re[i]==' ')
		{
			space++;
		}
	}
	printf("\nThe number of spaces is %d.",space);
}
