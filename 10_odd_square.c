#include<stdio.h>
int main (){
    
    int n;
    printf("enter number= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j=j+2){
            printf("%d ",j);
            // printf("*");
        }
        printf("\n");
    }
    return 0;
}

//n=4
//1 3 5 7
//1 3 5 7
//1 3 5 7
//1 3 5 7