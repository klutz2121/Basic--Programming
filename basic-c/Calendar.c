#include <stdio.h>
main ()
{
	int M,Y,i=1;
	printf ("Enter the Month and Year:\n");
	scanf ("%d\n %d",&M,&Y);
	for (i=1;i<=29;i++)
	{
		if (M == 2 || M == 02) 
		{
			if(Y%4 == 0 && Y%100!=0)
			printf ("%d ",i);
		}
	}
	for (i=1;i<=28;i++)
	{
		if (M==2 || M==02) 
		{
			if (Y%4!=0)
			{
			printf ("%d ",i);
			}
		}
	}
	for (i=1;i<=30;i++)
	{
		if (M==4 || M==6 || M==9 || M==11 || M==10)
		{
			printf ("%d ",i);
		}
	}
	for (i=1;i<=31;i++)
	{
		if (M==1 || M==3 || M==5 || M==7 || M==8 || M==12)
		{
			printf ("%d ",i);
		}
	}
}


