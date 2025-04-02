#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i=0;
	char a[50];
	FILE *fi;
	fi=fopen("F:\\moktan07\\lal1.txt","r");
	fgets(a,50,fi);
	for(i=0;a[i]!=EOF;i++)
	{
		printf("%c",a[i]);
	}
	printf("\n%d",a[1]);
	fclose(fi);
	return 0;
}
