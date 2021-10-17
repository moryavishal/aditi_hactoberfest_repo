#include<stdio.h>
void insert(int a[],int num,int pos,int n){
	int i;
	for(i=n;i>pos;i--)
		a[i] = a[i-1];
	a[pos] = num;	
	printf("Array after insertion\n");
	for( i=0;i<n+1;i++)
		printf("%d ",a[i]);
}
void del(int a[],int pos,int n){
	int i;
	for( i=pos;i<n;i++)
		a[i] = a[i+1];
	printf("Array after deletion\n");
	for( i=0;i<n;i++)
			printf("%d ",a[i]);
}
int main(){
	int n,num,pos,i;
	printf("enter the length\n");
	scanf("%d",&n);
	int a[n+1];
	printf("enter the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	    printf("enter the number and position to insert\n");
		scanf("%d %d",&num,&pos);
		insert(a,num,pos,n);
		printf("\nenter the position to delete\n");
		scanf("%d",&pos);
		del(a,pos,n);
	return 0;
}

