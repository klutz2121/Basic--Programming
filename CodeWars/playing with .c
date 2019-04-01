#include <stdio.h>
#include <math.h>

int digPow(int a, int b);
int main()
{
	int in,pow,res;
	
	printf("Enter the digit number:");
	scanf("%d",&in);
	printf("Enter the starting power of the number:");
	scanf("%d",&pow);
	digPow(in,pow);
	return 0;
}
int digPow(int a, int b)
{
	int temp=0,temp1=0,temp2=0,temp3=0,c,temp4,temp5;
	
	c=a;
	while(a>0)
	{
		temp = a%10; 
		a = a/10;
		temp1 = temp1*10+temp;
	}
	while(temp1>0)
	{
		temp2 = temp1%10;
		temp1 = temp1/10;
		temp3 = pow(temp2,b)+temp3;
		b++;
	}
	temp4 = temp3/c;
	temp5 = c*temp4;
	if(temp3 == temp5)
	printf("%d = %d*%d",temp3,c,temp4);
	else
	printf("This can't be done!!");
}
