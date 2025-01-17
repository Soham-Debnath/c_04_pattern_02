// print star right angle triangle
#include<stdio.h>
int main (){
    int n;
    printf("enter your number= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){ // 1st line e 4 te *, means (4+1)-1
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}