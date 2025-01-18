#include<stdio.h>
int main()
{
	int no,table,i;
	printf("\n Enter a no : ");
	scanf("%d",&no);
	for(i=1;i<=10;i++)
	{
		table=no*i;
		printf("table :%d\n",table);
	}
	return 0;
}