#include <stdio.h>
main ()
{
	int i,j,k,n;
	printf ("Enter the value for n:");
	scanf ("%d",&n);
	for (i=1;i<=n-3;i++)
	{
		for (j=-5;j<=n-i;j++)
		{
			printf (" ");
		}
		for (k=1;k<=i;k++)
		{
			printf ("*");
		}
		for (j=2;j<=i;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	for (i=1;i<n+2;i++)
	{
		for (j=-5;j<=n-(i+2);j++)
		{
			printf (" ");
		}
		for (k=1;k<=i;k++)
		{
			printf ("*");
		}
		for (j=1;j<=i+3;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	for (i=1;i<n+3;i++)
	{
		for (j=-5;j<=n-(i+2);j++)
		{
			printf (" ");
		}
		for (k=1;k<=i;k++)
		{
			printf ("*");
		}
		for (j=1;j<=i+4;j++)
		{
			printf ("*");
		}
		printf ("\n");
	}
	for (i=1;i<=4;i++)
	{
		for (j=-3;j<=n-1/2;j++)
		{
			printf (" ");	
		}	
		printf ("***");
		printf ("\n");
	} 
}
