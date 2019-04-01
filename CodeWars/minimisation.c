#include <stdio.h>

int main()
{
	int arr[4],i,j,temp,size=4,k=0;
	
	printf("Input 5 numbers:");
	for(i=0;i<=4;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<size;i++){
	for(j=0;j<size;j++){
	if(i==j) continue;
	else if(arr[i]==arr[j]){
	k=j;
	size--;
	while(k < size){
	arr[k]=arr[k+1];
	k++; }
	j=0; } } }
	for(i=0;i<5;i++)
	for(j=i+1;j<5;j++)
	{
		if(arr[j] < arr[i])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	for(i=0;i < size+1 ;i++)
	printf(" %d ",arr[i]);

}
