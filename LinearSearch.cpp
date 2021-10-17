#include<stdio.h>
int main(){
    int n,s,c=0;
    printf("Enter array length and number to search \n");
    scanf("%d %d",&n,&s);
    int arr[n];
    printf("Enter array elements \n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    
    for(int i=0;i<n;i++){
        if(arr[i]==s){
            printf("%d is found",s);
            c=1;
            break;
        }
    }
    if(c==0)
    printf("%d is not found",s);
}

