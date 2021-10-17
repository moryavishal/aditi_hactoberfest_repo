#include<stdio.h>
int main()
{
	int n,i;
	int a[100];
	printf("Enter size of array \n");
	scanf("%d",&n);
	printf("Enter elements of array \n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int max=a[0],min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
		if(a[i]<min)
		min=a[i];
	}
	printf("Maximim element in array is %d \n",max);
	printf("Minimim element in array is %d \n",min);
	return 0;
}
