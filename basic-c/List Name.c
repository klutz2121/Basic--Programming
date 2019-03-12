#include <stdio.h>
main ()
{
	char names[10][100];
	int i,j,n;
	printf ("Enter the number of names that you want:");
	scanf ("%d",&n);
	//printf ("Enter any names:");
	//scanf ("%s\n",names);
	printf ("Enter any names that you want:\n ");
	for (i=1;i<=n;i++)
	{
		scanf("%s",&names[i]);
	}
	for (j=1;j<=n;j++)
	{
		printf ("\n%d %s",j, names[j]);
	}
}
