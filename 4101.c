#include<stdio.h>
int main(){
    int a, b;
    while (a != 0 || b != 0){
        scanf("%d%d", &a, &b);
        if (a == 0 && b == 0){
        return 0;
        }
        if (a>b){
            printf("Yes\n");
        }
        if (a<=b) {
            printf("No\n");
        }
    }
    if (a == 0 && b == 0){
        return 0;
    }
}