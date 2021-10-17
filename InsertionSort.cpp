#include<stdio.h>
int main()
{
    int n,i,temp,j;
    printf("Enter the array length\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
	{
        temp=a[i];
        j=i-1;
        while(a[j]>temp && j>=0)
		{
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("After the insertion Sort \n");
    for(int j=0;j<n;j++)
        printf("%d ",a[j]);
    return 0;
}

