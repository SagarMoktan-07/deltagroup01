#include<stdio.h>
#include<stdlib.h>
<<<<<<< HEAD
struct sag
{
	int id;
	char na[20];
	char add[20];
	long long int ph;
};
int main()
{
	int i=0,n=0;
	char sna[50];
	printf("Enter the number of records:\n");
	scanf("%d",&n);
	struct sag arr[n];
	FILE *fp;
	fp=fopen("E:\\SAGARMOKTAN\\record.txt","w");
	if(fp==NULL)
	{
		printf("Sorry. The file couldn't be accessed.");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the name of employee:\n");
		gets(arr[i].na);
		printf("Enter the id of the employee:\n");
		scanf("%d",&arr[i].id);
		printf("Enter the address of the employee:\n");
		gets(arr[i].add);
		printf("Enter the phone number of the employee:\n");
		scanf("%lld",&arr[i].ph);
	}
	fclose(fp);
	return 0;
	
=======
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
>>>>>>> 0f012b3ddbe0af8202deb07ac4b289d8186b1a5d
}
