#include<stdio.h>
int main(){

    int n;  
    printf("Enter value for n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++){
            printf("*");
        } 
        printf("\n");
    }

    for(int i=2; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf(" ");
        }
        for(int j=1; j<=(n*2-(2*i-1)); j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}