//inverted number triangle
//n=4,row=4,col= n,n-1,.. to 1
// 4321 
// 321
// 21
// 1

#include<stdio.h>
int main (){
    int n;
    printf("enter number= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("%d ",j);
            // printf("*");
        }
        printf("\n");
    }
    return 0;
}