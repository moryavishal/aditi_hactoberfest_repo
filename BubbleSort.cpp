#include<stdio.h>
int main(){
   int n,i,j,t=0;
   printf("Enter size of  the array \n");
   scanf("%d",&n);
   int a[n];
   printf("Enter array elements \n");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n-1;i++)
   {
   	for(j=0;j<(n-1)-i;j++)
   	{
   	if(a[j]>a[j+1])
	   {
	   	t=a[j];
	   	a[j]=a[j+1];
	   	a[j+1]=t;
		}	
	}
   }
   printf("the sorting process\n");
   for(i=0;i<n;i++)
   printf("%d \n",a[i]);
   return 0;
}
