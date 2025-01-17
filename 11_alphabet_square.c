#include<stdio.h>
int main (){
    
    int n;
    printf("enter number= ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            
            int a;
            a=j+64;
            char ch=(char)a;
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}

//n=4
//A B C D
//A B C D
//A B C D
//A B C D
