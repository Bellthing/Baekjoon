#include<stdio.h>
int main(){
    int n=0, x=0;
    scanf("%d%d", &n, &x);
    int b;
    for (int i = 1; i<=n; i++){
        scanf("%d", &b);
        if (b<x){
            printf("%d ", b);
        }
    }
    return 0;
}